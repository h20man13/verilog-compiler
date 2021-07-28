#include "main/parser/RecursiveDescent.h"
#include "Token.h"

void RecursiveDescent::eat(){
	if(!token_list.empty()){
		token_list.pop_front();
	}
}

bool RecursiveDescent::eat_if_yummy(const tok type){
	if(peek().get_type() == type){
		eat();
		return true;
	} else {
		return false;
	}
}

Token RecursiveDescent::match(const tok type, const enum error_action action, const tok delim){
	if(will_match(delim)){
		return skip();
	} else {
		std::string error = "Expected token of type " + type_to_string(type) + " but found token of type " + type_to_string(peek().type);
		if(action == SKIP){
			error_log.add(error);
			while(skip().get_type() != delim);
			return (Token)*NULL;
		} else if(action == REPAIR){
			error_log.add(error);
			return Token(delim, "", peek().get_position());
		} else {
			error_log.add(error);
			exit(1);
			return (Token)*NULL;
		}
	}
}

Token RecursiveDescent::skip(){
	Token peeked = peek();
	eat();
	return peeked;
}

Token RecursiveDescent::peek(int ahead){
	std::list<const Token>::const_iterator it = token_list.begin();
	std::advance(it, ahead);
	return *it;
}

bool RecursiveDescent::will_match(const tok type, int ahead){
	return peek(ahead).get_type() == type;
}

File* const RecursiveDescent::parse_file(){
	return NULL; //TODO -- add file code for parser
}

Module* const RecursiveDescent::parse_module(){
	Position start = get_start();
	match(tok::MODULE);
	Identifier* ident = parse_identifier();

	std::list<Declaration* const> decl_list;
	std::list<ModItem* const> mod_item_list;

	if(will_match(tok::LPAR)){
		eat();
		Declaration* const param = parse_module_par_declaration();

		while(will_match(tok::COMMA)){
			eat();
			Declaration* const param = parse_module_par_declaration();
			decl_list.push_back(param);
		}

		match(tok::RPAR);
	}
	match(tok::SEMI);

	if(!will_match(tok::ENDMODULE)){
		do{
			ModItem* const mod_item = parse_mod_item();
			mod_item_list.push_back(mod_item);
		} while(!will_match(tok::ENDMODULE));
	}

	match(tok::ENDMODULE);

	return new Module(start, ident, decl_list, mod_item_list);
}

Declaration* const RecursiveDescent::parse_module_par_declaration(){
	const Position start = get_start();
	if (will_match(tok::INPUT)) {
		eat();
		if (will_match(tok::WIRE)) {
			eat();
		}
		if (will_match(tok::LBRACK)) {
			eat();
			ConstantExpression* const exp1 = parse_constant_expression();
			match(tok::COLON);
			ConstantExpression* const exp2 = parse_constant_expression();
			match(tok::RBRACK);
			Identifier* const ident = parse_identifier();
			std::list<Identifier* const> ident_list;
			ident_list.push_back(ident);
			return new InputWireVectorDeclaration(start, exp1, exp2, ident_list);
		} else {
			Identifier* const ident = parse_identifier();
			std::list<Identifier* const> ident_list;
			ident_list.push_back(ident);
			return new InputWireScalarDeclaration(start, ident_list);
		}
	} else if (will_match(tok::OUTPUT)) {
		eat();
		if (will_match(tok::REG)) {
			eat();
			if (will_match(tok::LBRACK)) {
				eat();
				ConstantExpression* const exp1 = parse_constant_expression();
				match(tok::COLON);
				ConstantExpression* const exp2 = parse_constant_expression();
				match(tok::RBRACK);
				Identifier* const ident = parse_identifier();
				std::list<RegValue* const> reg_val_list;
				reg_val_list.push_back(ident);
				return new OutputRegVectorDeclaration(start, exp1, exp2, reg_val_list);
			} else {
				Identifier* const ident = parse_identifier();
				std::list<RegValue* const> reg_list;
				reg_list.push_back(ident);
				return new OutputRegScalarDeclaration(start, reg_list);
			}
		} else if (will_match(tok::WIRE)) {
			eat();
			if (will_match(tok::LBRACK)) {
				eat();
				ConstantExpression* const exp1 = parse_constant_expression();
				match(tok::COLON);
				ConstantExpression* const exp2 = parse_constant_expression();
				match(tok::RBRACK);
				Identifier* const ident = parse_identifier();
				std::list<Identifier* const> ident_list;
				ident_list.push_back(ident);
				return new OutputWireVectorDeclaration(start, exp1, exp2, ident_list);
			} else {
				Identifier* const ident = parse_identifier();
				std::list<Identifier* const> ident_list;
				ident_list.push_back(ident);
				return new OutputWireScalarDeclaration(start, ident_list);
			}
		} else {
			if (will_match(tok::LBRACK)) {
				eat();
				ConstantExpression* const exp1 = parse_constant_expression();
				match(tok::COLON);
				ConstantExpression* const exp2 = parse_constant_expression();
				match(tok::RBRACK);
				Identifier* const ident = parse_identifier();
				std::list<Identifier* const> ident_list;
				ident_list.push_back(ident);
				return new OutputWireVectorDeclaration(start, exp1, exp2, ident_list);
			} else {
				Identifier* const ident = parse_identifier();
				std::list<Identifier* const> ident_list;
				ident_list.push_back(ident);
				return new OutputWireScalarDeclaration(start, ident_list);
			}
		}
	} else {
		Identifier* const ident = parse_identifier();
		return new UnidentifiedDeclaration(start, ident);
	}
}

ModItem* const RecursiveDescent::parse_mod_item(){
	if(will_match(tok::FUNCTION)) parse_function_declaration();
	else if(will_match(tok::TASK)) parse_task_declaration();
	else if(will_match(tok::INTEGER)) parse_integer_declaration();
	else if(will_match(tok::REAL)) parse_real_declaration();
	else if(will_match(tok::OUTPUT)){
		if(will_match(tok::WIRE, 1)) parse_output_wire_declaration();
		else if(will_match(tok::REG, 1)) parse_output_reg_declaration();
		else parse_output_declaration();
	} else if(will_match(tok::INPUT)){
		if (will_match(tok::WIRE, 1)) parse_input_wire_declaration();
		else parse_input_declaration();
	} else if(will_match(tok::INITIAL)) parse_initial_statement();
	else if(will_match(tok::ALWAYS)) parse_always_statement();
	else if(will_match(tok::REG)) parse_reg_declaration();
	else if(will_match(tok::WIRE)) parse_wire_declaration();
	else if(will_match(tok::ASSIGN)) parse_continuous_assignment();
	else if(will_match(tok::IDENTIFIER)) parse_mod_instantiation();
	else if(will_match(tok::AND)) parse_and_gate_declaration();
	else if(will_match(tok::NAND)) parse_nand_gate_declaration();
	else if(will_match(tok::NOR)) parse_nor_gate_declaration();
	else if(will_match(tok::OR)) parse_or_gate_declaration();
	else if(will_match(tok::XNOR)) parse_xnor_gate_declaration();
	else if(will_match(tok::XOR)) parse_xor_gate_declaration();
	else {
		Token matched = peek();
		error_log.add(Error("Unexpected ModItem token of type " + matched.get_type() + " and lexeme " + matched.get_lexeme() + " found", matched.get_position()));
		error_log.print();
		exit(1);
		return NULL;
	}
}


FunctionDeclaration* const RecursiveDescent::parse_function_declaration(){
	const Position start = get_start();
	match(tok::FUNCTION);
	Declaration* const func_name = parse_function_name();
	match(tok::SEMI, REPAIR);

	std::list<Declaration* const> param_list;
	std::list<Declaration* const> local_list;

	do{
		if (will_match(tok::INPUT)) {
			Declaration *const decl = parse_declaration();
			param_list.push_back(decl);
		} else {
			Declaration *const decl = parse_declaration();
			local_list.push_back(decl);
		}
	} while(will_match(tok::INTEGER) || will_match(tok::REAL) || will_match(tok::WIRE) || will_match(tok::REG) || will_match(tok::INPUT) || will_match(tok::OUTPUT));

	Statement* const stat = parse_statement();

	match(tok::ENDFUNCTION, REPAIR);

	return new FunctionDeclaration(start, func_name, param_list, local_list, stat);
}

Declaration* const RecursiveDescent::parse_function_name(){
	const Position start = get_start();
	if (will_match(tok::REG)) {
		eat();
		if (will_match(tok::LBRACK)) {
			eat();
			ConstantExpression* const exp1 = parse_constant_expression();
			match(tok::COLON);
			ConstantExpression* const exp2 = parse_constant_expression();
			match(tok::RBRACK);
			Identifier* const ident = parse_identifier();
			std::list<RegValue* const> expr_list;
			expr_list.push_back(ident);
			return new RegVectorDeclaration(start, exp1, exp2, expr_list);
		} else {
			Identifier* const ident = parse_identifier();
			std::list<RegValue* const> exp_list;
			exp_list.push_back(ident);
			return new RegScalarDeclaration(start, exp_list);
		}
	} else if (will_match(tok::INTEGER)) {
		eat();
		Identifier* const ident = parse_identifier();
		std::list<RegValue* const> exp_list;
		exp_list.push_back(ident);
		return new IntegerDeclaration(start, exp_list);
	} else if (will_match(tok::REAL)) {
		eat();
		Identifier* const ident = parse_identifier();
		std::list<Identifier* const> ident_list;
		ident_list.push_back(ident);
		return new RealDeclaration(start, ident_list);
	} else if (will_match(tok::LBRACK)) {
		eat();
		ConstantExpression* const exp1 = parse_constant_expression();
		match(tok::COLON);
		ConstantExpression* const exp2 = parse_constant_expression();
		match(tok::RBRACK);
		Identifier* const ident = parse_identifier();
		std::list<RegValue* const> exp_list;
		exp_list.push_back(ident);
		return new RegVectorDeclaration(start, exp1, exp2, exp_list);
	} else {
		Identifier* const ident = parse_identifier();
		std::list<RegValue* const> exp_list;
		exp_list.push_back(ident);
		return new RegScalarDeclaration(start,exp_list);
	}
}

TaskDeclaration* const RecursiveDescent::parse_task_declaration() {
	const Position start = get_start();
	match(tok::TASK);
	Identifier* const task_name = parse_identifier();
	match(tok::SEMI, REPAIR);

	std::list<Declaration* const> param_list;
	std::list<Declaration* const> local_list;

	while(will_match(tok::INTEGER) || will_match(tok::REAL) || will_match(tok::WIRE) || will_match(tok::REG) || will_match(tok::INPUT) || will_match(tok::OUTPUT)){
		if(will_match(tok::INPUT)){
			Declaration* const decl = parse_declaration();
			param_list.push_back(decl);
		} else {
			Declaration* const decl = parse_declaration();
			local_list.push_back(decl);
		}
	}

	Statement* const stat = parse_statement_or_null();
	match(tok::ENDTASK, REPAIR);

	return new TaskDeclaration(start, task_name, param_list, local_list, stat);
}

Declaration* const RecursiveDescent::parse_declaration() {
	if (will_match(tok::INTEGER)) {
		return parse_integer_declaration();
	} else if (will_match(tok::REAL)) {
		return parse_real_declaration();
	} else if (will_match(tok::WIRE)) {
		return parse_wire_declaration();
	} else if (will_match(tok::REG)) {
		return parse_reg_declaration();
	} else if (will_match(tok::INPUT)) {
		if (will_match(tok::WIRE, 1)) {
			return parse_input_wire_declaration();
		} else if (will_match(tok::REG, 1)) {
			return parse_input_reg_declaration();
		} else {
			return parse_input_declaration();
		}
	} else if (will_match(tok::OUTPUT)) {
		if (will_match(tok::REG, 1)) {
			return parse_output_reg_declaration();
		} else if (will_match(tok::WIRE, 1)) {
			return parse_output_wire_declaration();
		} else {
			return parse_output_declaration();
		}
	} else {
		Token matched = peek();
		error_log.add(Error("Unexpected Declaration token of type " + matched.get_type() + " and lexeme " + matched.get_lexeme() + " found", matched.get_position()));
		error_log.print();
		exit(1);
		return NULL;
	}
}

InitialStatement* const RecursiveDescent::parse_initial_statement(){
	const Position start = get_start();
	match(tok::INITIAL);
	Statement* const stat = parse_statement();
	return new InitialStatement(start, stat);
}

AlwaysStatement* const RecursiveDescent::parse_always_statement(){
	const Position start = get_start();
	match(tok::ALWAYS);
	Statement* const stat = parse_statement();
	return new InitialStatement(start, stat);
}

ContinuousAssignment* const RecursiveDescent::parse_continuous_assignment(){
	const Position start = get_start();
	match(tok::ASSIGN);
	std::list<ContAssignInstance* const> instance_list;

	do{
		ContAssignInstance* const instance = parse_cont_assign_instance();
		instance_list.push_back(instance);
	} while(eat_if_yummy(tok::COMMA));

	match(tok::SEMI, REPAIR);

	return new ContinuousAssignment(start, instance_list);
}

ContAssignInstance* const RecursiveDescent::parse_cont_assign_instance(){
	LValue* const lvalue = parse_l_value();
	match(tok::EQ1, REPAIR);
	Expression* const exp = parse_expression();
}

Declaration* const RecursiveDescent::parse_reg_declaration(){
	const Position start = get_start();
	match(tok::REG);
	if (will_match(tok::LBRACK)) {
		eat();
		ConstantExpression *const exp1 = parse_constant_expression();
		match(tok::COLON, REPAIR);
		ConstantExpression *const exp2 = parse_constant_expression();
		match(tok::RBRACK, REPAIR);

		std::list<RegValue* const > reg_value_list;

		do {
			RegValue *const rvalue = parse_reg_value();
			reg_value_list.push_back(rvalue);
		} while (eat_if_yummy(tok::COMMA));

		match(tok::SEMI, REPAIR);

		return new RegVectorDeclaration(start, exp1, exp2, reg_value_list);
	} else {
		std::list<RegValue* const > reg_value_list;

		do {
			RegValue *const rvalue = parse_reg_value();
			reg_value_list.push_back(rvalue);
		} while (eat_if_yummy(tok::COMMA));

		match(tok::SEMI, REPAIR);

		return new RegScalarDeclaration(start, reg_value_list);
	}
}

Declaration* const RecursiveDescent::parse_wire_declaration(){
	const Position start = get_start();
	match(tok::WIRE);
	if (will_match(tok::LBRACK)) {
		eat();
		ConstantExpression *const exp1 = parse_constant_expression();
		match(tok::COLON, REPAIR);
		ConstantExpression *const exp2 = parse_constant_expression();
		match(tok::RBRACK, REPAIR);

		std::list<Identifier* const > ident_list;

		do {
			Identifier *const ident = parse_identifier();
			ident_list.push_back(ident);
		} while (eat_if_yummy(tok::COMMA));

		match(tok::SEMI, REPAIR);

		return new WireVectorDeclaration(start, exp1, exp2, ident_list);
	} else {
		std::list<Identifier* const > ident_list;

		do {
			Identifier *const ident = parse_identifier();
			ident_list.push_back(ident);
		} while (eat_if_yummy(tok::COMMA));

		match(tok::SEMI, REPAIR);

		return new WireScalarDeclaration(start, ident_list);
	}
}

Declaration* const RecursiveDescent::parse_output_wire_declaration(){
	const Position start = get_start();
	match(tok::OUTPUT);
	match(tok::WIRE);
	if(will_match(tok::LBRACK)){
		eat();
		ConstantExpression* const exp1 = parse_constant_expression();
		match(tok::COLON, REPAIR);
		ConstantExpression* const exp2 = parse_constant_expression();
		match(tok::RBRACK, REPAIR);

		std::list<Identifier* const> ident_list;

		do{
			Identifier* const ident = parse_identifier();
			ident_list.push_back(ident);
		} while(eat_if_yummy(tok::COMMA));

		match(tok::SEMI, REPAIR);

		return new OutputWireVectorDeclaration(start, exp1, exp2, ident_list);
	} else {
		std::list<Identifier* const> ident_list;

		do{
			Identifier* const ident = parse_identifier();
			ident_list.push_back(ident);
		} while(eat_if_yummy(tok::COMMA));

		match(tok::SEMI, REPAIR);

		return new OutputWireScalarDeclaration(start, ident_list);
	}
}



Declaration* const RecursiveDescent::parse_input_wire_declaration(){
	const Position start = get_start();
	match(tok::INPUT);
	match(tok::WIRE);
	if (will_match(tok::LBRACK)) {
		eat();
		ConstantExpression *const exp1 = parse_constant_expression();
		match(tok::COLON, REPAIR);
		ConstantExpression *const exp2 = parse_constant_expression();
		match(tok::RBRACK, REPAIR);

		std::list<Identifier* const > ident_list;

		do {
			Identifier *const ident = parse_identifier();
			ident_list.push_back(ident);
		} while (eat_if_yummy(tok::COMMA));

		match(tok::SEMI, REPAIR);

		return new InputWireVectorDeclaration(start, exp1, exp2, ident_list);
	} else {
		std::list<Identifier* const > ident_list;

		do {
			Identifier *const ident = parse_identifier();
			ident_list.push_back(ident);
		} while (eat_if_yummy(tok::COMMA));

		match(tok::SEMI, REPAIR);

		return new InputWireScalarDeclaration(start, ident_list);
	}
}

Declaration* const RecursiveDescent::parse_output_reg_declaration(){
	const Position start = get_start();
	match(tok::OUTPUT);
	match(tok::REG);
	if (will_match(tok::LBRACK)) {
		eat();
		ConstantExpression *const exp1 = parse_constant_expression();
		match(tok::COLON, REPAIR);
		ConstantExpression *const exp2 = parse_constant_expression();
		match(tok::RBRACK, REPAIR);

		std::list<RegValue* const> reg_value_list;

		do {
			RegValue *const rvalue = parse_reg_value();
			reg_value_list.push_back(rvalue);
		} while (eat_if_yummy(tok::COMMA));

		match(tok::SEMI, REPAIR);

		return new OutputRegVectorDeclaration(start, exp1, exp2, reg_value_list);
	} else {
		std::list<RegValue* const > reg_value_list;

		do {
			RegValue *const rvalue = parse_reg_value();
			reg_value_list.push_back(rvalue);
		} while (eat_if_yummy(tok::COMMA));

		match(tok::SEMI, REPAIR);

		return new OutputRegScalarDeclaration(start, reg_value_list);
	}
}

Declaration* const RecursiveDescent::parse_input_reg_declaration(){
	const Position start = get_start();
	match(tok::INPUT);
	match(tok::REG);
	if (will_match(tok::LBRACK)) {
		eat();
		ConstantExpression *const exp1 = parse_constant_expression();
		match(tok::COLON, REPAIR);
		ConstantExpression *const exp2 = parse_constant_expression();
		match(tok::RBRACK, REPAIR);

		std::list<RegValue* const> reg_value_list;

		do {
			RegValue *const rvalue = parse_identifier();
			reg_value_list.push_back(rvalue);
		} while (eat_if_yummy(tok::COMMA));

		match(tok::SEMI, REPAIR);

		return new InputRegVectorDeclaration(start, exp1, exp2, reg_value_list);
	} else {
		std::list<RegValue* const > reg_value_list;

		do {
			RegValue *const rvalue = parse_identifier();
			reg_value_list.push_back(rvalue);
		} while (eat_if_yummy(tok::COMMA));

		match(tok::SEMI, REPAIR);

		return new InputRegScalarDeclaration(start, reg_value_list);
	}
}

Declaration* const RecursiveDescent::parse_input_declaration(){
	const Position start = get_start();
	match(tok::INPUT);
	if (will_match(tok::LBRACK)) {
		eat();
		ConstantExpression *const exp1 = parse_constant_expression();
		match(tok::COLON, REPAIR);
		ConstantExpression *const exp2 = parse_constant_expression();
		match(tok::RBRACK, REPAIR);

		std::list<Identifier* const > ident_list;

		do {
			Identifier *const ident = parse_identifier();
			ident_list.push_back(ident);
		} while (eat_if_yummy(tok::COMMA));

		match(tok::SEMI, REPAIR);

		return new InputWireVectorDeclaration(start, exp1, exp2, ident_list);
	} else {
		std::list<Identifier* const > ident_list;

		do {
			Identifier *const ident = parse_identifier();
			ident_list.push_back(ident);
		} while (eat_if_yummy(tok::COMMA));

		match(tok::SEMI, REPAIR);

		return new InputWireScalarDeclaration(start, ident_list);
	}
}

Declaration* const RecursiveDescent::parse_output_declaration(){
	const Position start = get_start();
	match(tok::OUTPUT);
	if(will_match(tok::LBRACK)){
		eat();
		ConstantExpression* const exp1 = parse_constant_expression();
		match(tok::COLON, REPAIR);
		ConstantExpression* const exp2 = parse_constant_expression();
		match(tok::RBRACK, REPAIR);

		std::list<Identifier* const> ident_list;

		do{
			Identifier* const ident = parse_identifier();
			ident_list.push_back(ident);
		} while(eat_if_yummy(tok::COMMA));

		match(tok::SEMI, REPAIR);

		return new OutputWireVectorDeclaration(start, exp1, exp2, ident_list);
	} else {
		std::list<Identifier* const> ident_list;

		do{
			Identifier* const ident = parse_identifier();
			ident_list.push_back(ident);
		} while(eat_if_yummy(tok::COMMA));

		match(tok::SEMI, REPAIR);

		return new OutputWireScalarDeclaration(start, ident_list);
	}
}

RealDeclaration* const RecursiveDescent::parse_real_declaration(){
	const Position start = get_start();
	match(tok::REAL);
	std::list<Identifier* const> ident_list;
	do{
		Identifier* const ident = parse_identifier();
		ident_list.push_back(ident);
	}while(eat_if_yummy(tok::COMMA));

	match(tok::SEMI, REPAIR);
	return new RealDeclaration(start, ident_list);
}

IntegerDeclaration* const RecursiveDescent::parse_integer_declaration(){
	const Position start = get_start();
	match(tok::INTEGER);
	std::list<RegValue* const> reg_value_list;
	do{
		RegValue* const reg_value = parse_reg_value();
		reg_value_list.push_back(reg_value);
	}while(eat_if_yummy(tok::COMMA));

	match(tok::SEMI, REPAIR);

	return new IntegerDeclaration(start, reg_value_list);
}

AndGateDeclaration* const RecursiveDescent::parse_and_gate_declaration(){
	 const Position start = get_start();
	 match(tok::AND);
	 match(tok::LPAR, REPAIR);

	 std::list<Expression* const> exp_list;

	 do{
		 Expression* const exp = parse_expression();
		 exp_list.push_back(exp);
	 } while(eat_if_yummy(tok::COMMA));

	match(tok::RPAR, REPAIR);
	match(tok::SEMI, REPAIR);

	return new AndGateDeclaration(start, exp_list);
}

NandGateDeclaration* const RecursiveDescent::parse_nand_gate_declaration(){
	const Position start = get_start();
	match(tok::NAND);
	match(tok::LPAR, REPAIR);

	std::list<Expression* const > exp_list;

	do {
		Expression *const exp = parse_expression();
		exp_list.push_back(exp);
	} while (eat_if_yummy(tok::COMMA));

	match(tok::RPAR, REPAIR);
	match(tok::SEMI, REPAIR);

	return new NandGateDeclaration(start, exp_list);
}

NotGateDeclaration* const RecursiveDescent::parse_not_gate_declaration(){
	const Position start = get_start();
	match(tok::NOT);
	match(tok::LPAR, REPAIR);

	std::list<Expression* const> exp_list;

	do{
		Expression* const exp = parse_expression();
		exp_list.push_back(exp);
	} while(eat_if_yummy(tok::COMMA));

	match(tok::RPAR, REPAIR);
	match(tok::SEMI, REPAIR);

	return new NotGateDeclaration(start, exp_list);
}

OrGateDeclaration* const RecursiveDescent::parse_or_gate_declaration(){
	const Position start = get_start();
	match(tok::OR);
	match(tok::LPAR, REPAIR);

	std::list<Expression* const> exp_list;

	do{
		Expression* const exp = parse_expression();
		exp_list.push_back(exp);
	} while(eat_if_yummy(tok::COMMA));

	match(tok::RPAR, REPAIR);
	match(tok::SEMI, REPAIR);

	return new OrGateDeclaration(start, exp_list);
}


XnorGateDeclaration* const RecursiveDescent::parse_xnor_gate_declaration(){
	const Position start = get_start();
	match(tok::XNOR);
	match(tok::LPAR, REPAIR);

	std::list<Expression* const > exp_list;

	do {
		Expression *const exp = parse_expression();
		exp_list.push_back(exp);
	} while (eat_if_yummy(tok::COMMA));

	match(tok::RPAR, REPAIR);
	match(tok::SEMI, REPAIR);

	return new XnorGateDeclaration(start, exp_list);
}

XorGateDeclaration* const RecursiveDescent::parse_xor_gate_declaration(){
	const Position start = get_start();
	match(tok::XOR);
	match(tok::LPAR, REPAIR);

	std::list<Expression* const> exp_list;

	do {
		Expression *const exp = parse_expression();
		exp_list.push_back(exp);
	} while (eat_if_yummy(tok::COMMA));

	match(tok::RPAR, REPAIR);
	match(tok::SEMI, REPAIR);

	return new XorGateDeclaration(start, exp_list);
}



ModInstantiation* const RecursiveDescent::parse_mod_instantiation(){
	Position start = get_start();
	Identifier* const type = parse_identifier();

	std::list<ModInstance* const> mod_instance_list;

	do{
		ModInstance* const mod_instance = parse_mod_instance();
		mod_instance_list.push_back(mod_instance);
	} while(eat_if_yummy(tok::COMMA));

	match(tok::SEMI, REPAIR);

	return new ModInstantiation(start, type, mod_instance_list);

}

ModInstance* const RecursiveDescent::parse_mod_instance(){
	Identifier* const ident = parse_identifier();
	match(tok::LPAR, REPAIR);

	std::list<Expression* const> exp_list;

	Expression* const (*exp_func) = will_match(tok::PERIOD) ? parse_port_connection : parse_expression_or_null;

	do{
		Expression* const exp = exp_func();
		exp_list.push_back(exp);
	} while(eat_if_yummy(tok::COMMA));

	match(tok::RPAR, REPAIR);

	return new ModInstance(ident, exp_list);
}

//moditems



ModItem* const RecursiveDescent::parse_mod_item(){

}

//statements

Statement* const RecursiveDescent::parse_statement(){
	Position start = get_start();
	if (will_match(tok::IF)) return parse_if_statement();
	else if (will_match(tok::CASE)) return parse_case_statement();
	else if (will_match(tok::CASEZ)) return parse_casez_statement();
	else if (will_match(tok::CASEX)) return parse_casex_statement();
	else if (will_match(tok::FOREVER)) return parse_forever_statement();
	else if (will_match(tok::REPEAT)) return parse_repeat_statement();
	else if (will_match(tok::WHILE)) return parse_while_statement();
	else if (will_match(tok::FOR)) return parse_for_statement();
	else if (will_match(tok::WAIT)) return parse_wait_statement();
	else if (will_match(tok::BEGIN)) return parse_sequential_block();
	else if (will_match(tok::DOLLAR)) { //system tasks
		skip();
		Token ident = match(tok::IDENTIFIER);
		std::list<Expression* const> exp_list;
		if (will_match(tok::LPAR)){
			eat();
			if (!will_match(tok::RPAR)) {
				Expression* const exp = parse_expression();
				exp_list.push_back(exp);
				while(will_match(tok::COMMA)){
					eat();
					exp = parse_expression();
					exp_list.push_back(exp);
				}
			}
			match(tok::RPAR, REPAIR);
		}
		match(tok::SEMI, REPAIR);
		return new SystemTaskCall(start, ident.get_lexeme(), exp_list);
	} else if (will_match(tok::LCURL)){
		Concatenation* const concat = parse_concatenation();
		return parse_procedural_assignment(concat);
	} else if(will_match(tok::IDENTIFIER)){
		Token ident = skip();
		std::list<Expression* const> exp_list;
		if(will_match(tok::LPAR)){
			std::list<Expression* const> exp_list;
			eat();
			if (!will_match(tok::RPAR)) {
				Expression *const exp = parse_expression();
				exp_list.push_back(exp);
				while (will_match(tok::COMMA)) {
					eat();
					exp = parse_expression();
					exp_list.push_back(exp);
				}
			}
			match(tok::RPAR, REPAIR);
			match(tok::SEMI, REPAIR);
			return new TaskCall(start, ident.get_lexeme(), exp_list);
		} else if(will_match(tok::SEMI)){
			eat();
			return new TaskCall(start, ident.get_lexeme(), exp_list);
		} else if (will_match(tok::LBRACK)){
			eat();
			Expression* const exp1 = parse_expression();
			if(will_match(tok::COLON)){
				ConstantExpression* const cexp1 = new ConstantExpression(exp1->get_position(), exp1);
				eat();
				ConstantExpression* const cexp2 = parse_constant_expression();
				match(tok::RBRACK, REPAIR);
				Slice* const slice = new Slice(start, ident.get_lexeme(), cexp1, cexp2);
				return parse_procedural_assignment(slice);
			} else {
				match(tok::RBRACK, REPAIR);
				Index* const index = new Index(start, ident.get_lexeme(), exp1);
				return parse_procedural_assignment(index);
			}
		} else {
			Identifier* identifier = Identifier(ident);
			return parse_procedural_assignment(identifier);
		}
	} else {
		Token matched = peek();
		error_log.add(Error("Unexpected Statement token of type " + type_to_string(matched.get_type()) + " and lexeme " + matched.get_lexeme() + " found", matched.get_position()));
		error_log.print();
		exit(1);
		return NULL;
	}
}

Statement* const RecursiveDescent::parse_statement_or_null(){
	const Position start = get_start();
	if(will_match(tok::SEMI)){
		return new EmptyStatement(start);
	} else {
		return parse_statement();
	}
}

int RecursiveDescent::is_lvalue(){
	if(will_match(LCURL)){
		int element = 1;
		while(!will_match(tok::RCURL, element)){
			element++;
		}
		return element + 1;
	} else if(will_match(tok::IDENTIFIER)){
		if(will_match(tok::RBRACK, 1)){
			int element = 2;
			while(!will_match(tok::RCURL, element)){
				element++;
			}
			return element + 1;
		} else if(will_match(tok::EQ1, 1) || will_match(tok::LE, 1)){
			return 0;
		} else {
			return -1;
		}
	} else {
		return -1; //isnt lvalue
	}
}

bool RecursiveDescent::is_unblocking_assignment(){
	int lval = is_lvalue();
	if(lval == -1){
		return false;
	} else {
		return will_match(tok::LE,lval+1);
	}
}

ProceduralAssignment* const RecursiveDescent::parse_procedural_assignment(LValue* const lvalue){
	if(will_match(tok::LE)){
		std::list<LValue* const> lvalue_list;
		std::list<Expression* const> expression_list;
		eat();
		Expression* const exp = parse_expression();
		match(tok::SEMI, REPAIR);
		lvalue_list.push_back(lvalue);
		expression_list.push_back(exp);
		while(is_unblocking_assignment()){
			LValue* const lv = parse_l_value();
			match(tok::LE, REPAIR);
			exp = parse_expression();
			lvalue_list.push_back(lv);
			expression_list.push_back(exp);
			match(tok::SEMI, REPAIR);
		}

		return new NonBlocking(lvalue->get_position(), lvalue_list, expression_list);

	} else {
		match(tok::EQ1, REPAIR);
		Expression* const exp = parse_expression();
		return new Blocking(lvalue->get_position(), lvalue, exp);
	}
}

Blocking* const RecursiveDescent::parse_blocking_assignment_statement(){
	const Position& start = get_start();
	LValue* const lvalue = parse_l_value();
	match(tok::EQ1, REPAIR);
	Expression* const exp = parse_expression();
	match(tok::SEMI, REPAIR);
	return new Blocking(start, lvalue, exp);
}

If* const RecursiveDescent::parse_if_statement(){
	const Position start = get_start();
	match(tok::IF);
	match(tok::LPAR, REPAIR);
	Expression* const expr = parse_expression();
	match(tok::RPAR, REPAIR);
	Statement* const stat = parse_statement_or_null();
	if(will_match(tok::ELSE)){
		eat();
		Statement* const stat2 = parse_statement();
		return new IfElse(start, expr, stat, stat2);
	} else {
		return new If(start, expr, stat);
	}
}

CaseItem* const RecursiveDescent::parse_case_item(){
	if(will_match(tok::DEFAULT)){
		eat();
		if(will_match(tok::COLON)){
			eat();
		}
		Statement* const stat = parse_statement();
		return new DefaultItem(stat);
	} else {

		std::list<Expression* const> exp_list;

		Expression* const exp = parse_expression();
		exp_list.push_back(exp);

		while(will_match(tok::COMMA)){
			eat();
			exp = parse_expression();
			exp_list.push_back(exp);
		}

		match(tok::COLON, REPAIR);
		Statement* const stat = parse_statement_or_null();
		return new ExprItem(exp_list, stat);
	}
}

Case* const RecursiveDescent::parse_case_statement(){
	const Position start = get_start();
	match(tok::CASEX);
	match(tok::LPAR, REPAIR);
	Expression* const exp = parse_expression();
	match(tok::RPAR, REPAIR);

	std::list<CaseItem* const> case_item_list;

	CaseItem* const item = parse_case_item();
	case_item_list.push_back(item);

	while(!will_match(tok::ENDCASE)){
		item = parse_case_item();
		case_item_list.push_back(item);
	}

	match(tok::ENDCASE);
	return new Case(start, exp, case_item_list);
}

CaseZ* const RecursiveDescent::parse_casez_statement(){
	const Position start = get_start();
	match(tok::CASEX);
	match(tok::LPAR, REPAIR);
	Expression* const exp = parse_expression();
	match(tok::RPAR, REPAIR);

	std::list<CaseItem* const> case_item_list;

	CaseItem* const item = parse_case_item();
	case_item_list.push_back(item);

	while(!will_match(tok::ENDCASE)){
		item = parse_case_item();
		case_item_list.push_back(item);
	}

	match(tok::ENDCASE);
	return new CaseZ(start, exp, case_item_list);
}

CaseX* const RecursiveDescent::parse_casex_statement(){
	const Position start = get_start();
	match(tok::CASEX);
	match(tok::LPAR, REPAIR);
	Expression* const exp = parse_expression();
	match(tok::RPAR, REPAIR);

	std::list<CaseItem* const> case_item_list;

	CaseItem* const item = parse_case_item();
	case_item_list.push_back(item);

	while(!will_match(tok::ENDCASE)){
		item = parse_case_item();
		case_item_list.push_back(item);
	}

	match(tok::ENDCASE);
	return new CaseX(start, exp, case_item_list);
}

For* const RecursiveDescent::parse_for_statement(){
	const Position start = get_start();
	match(tok::FOR);
	match(tok::LPAR, REPAIR);
	Blocking* const init = parse_blocking_assignment_statement();
	match(tok::SEMI, REPAIR);
	Expression* const expr = parse_expression();
	match(tok::SEMI, REPAIR);
	Blocking* const change = parse_blocking_assignment_statement();
	match(tok::RPAR, REPAIR);
	Statement* const stat = parse_statement();
	return new For(start, init, expr, change, stat);
}

Forever* const RecursiveDescent::parse_forever_statement(){
	const Position start = get_start();
	match(tok::REPEAT);
	Statement* const stat = parse_statement();
	return new Forever(start, stat);
}

Repeat* const RecursiveDescent::parse_repeat_statement(){
	const Position start = get_start();
	match(tok::REPEAT);
	match(tok::LPAR, REPAIR);
	Expression* const exp = parse_expression();
	match(tok::RPAR, REPAIR);
	Statement* const stat = parse_statement();
	return new Repeat(start, exp, stat);
}

While* const RecursiveDescent::parse_while_statement(){
	const Position start = get_start();
	match(tok::WHILE);
	match(tok::LPAR, REPAIR);
	Expression* const exp = parse_expression();
	match(tok::RPAR, REPAIR);
	Statement* const stat = parse_statement();
	return new While(start, exp, stat);
}

Wait* const RecursiveDescent::parse_wait_statement(){
	const Position start = get_start();
	match(tok::WAIT);
	match(tok::LPAR, REPAIR, tok::LPAR);
	Expression* const  exp = parse_expression();
	match(tok::RPAR, REPAIR, tok::RPAR);
	Statement* const  stat = parse_statement(); //TODO -- change to statement or null
	return new Wait(start, exp, stat);
}

SequentialBlock* const RecursiveDescent::parse_sequential_block(){
	const Position start = get_start();
	match(tok::BEGIN);

	std::list<Statement* const> stats;
	Statement* const stat = parse_statement();
	stats.push_back(stat);

	while(will_match(tok::SEMI) || !will_match(tok::END)){
		eat();
		stat = parse_statement();
		stats.push_back(stat);
	}
	match(tok::END);

	return new SequentialBlock(start, stats);
}

//expressions

//<reg_value> := <index> | <identifier> | <slice>

RegValue* const RecursiveDescent::parse_reg_value(){
	const Position start = get_start();
	Token ident = match(tok::IDENTIFIER);
	if (will_match(tok::LBRACK)) {
		eat();
		Expression *const exp1 = parse_expression();
		if (will_match(tok::COLON)) {
			eat();
			ConstantExpression *const cexp1 = new ConstantExpression(exp1->get_position(), exp1);
			ConstantExpression *const cexp2 = parse_constant_expression();
			return new Slice(start, ident.get_lexeme(), cexp1, cexp2);
		} else {
			match(tok::RBRACK, REPAIR, tok::RBRACK);
			return new Index(start, ident.get_lexeme(), exp1);
		}
	} else {
		return Identifier(ident);
	}
}

//<lvalue> := <concatenation> | <index> | <slice> | identifier

LValue* const RecursiveDescent::parse_l_value(){
	const Position start = get_start();
	if(will_match(tok::LCURL)){
		return parse_concatenation();
	} else {
		Token ident = match(tok::IDENTIFIER);
		if(will_match(tok::LBRACK)){
			eat();
			Expression* const exp1 = parse_expression();
			if(will_match(tok::COLON)){
				eat();
				ConstantExpression* const cexp1 = new ConstantExpression(exp1->get_position(), exp1);
				ConstantExpression* const cexp2 = parse_constant_expression();
				return new Slice(start, ident.get_lexeme(), cexp1, cexp2);
			} else {
				match(tok::RBRACK, REPAIR, tok::RBRACK);
				return new Index(start, ident.get_lexeme(), exp1);
			}
		} else {
			return Identifier(ident);
		}
	}
}

RegValue* const RecursiveDescent::parse_reg_value(){
	const Position start = get_start();
	Token ident = match(tok::IDENTIFIER);
	if (will_match(tok::LBRACK)) {
		eat();
		Expression *const exp1 = parse_expression();
		if (will_match(tok::COLON)) {
			eat();
			ConstantExpression *const cexp1 = new ConstantExpression(
					exp1->get_position(), exp1);
			ConstantExpression *const cexp2 = parse_constant_expression();
			return new Slice(start, ident.get_lexeme(), cexp1, cexp2);
		} else {
			match(tok::RBRACK, REPAIR, tok::RBRACK);
			return new Index(start, ident.get_lexeme(), exp1);
		}
	} else {
		return Identifier(ident);
	}
}

//<Expression>:= <logical_or_expression> [ ? <logical_or_expression> : <logical_or_expression> ]
Expression* const RecursiveDescent::parse_expression(){
	const Position start = get_start();
	Expression* const check = parse_logical_or_expression();

	if(will_match(tok::QUEST)){
		eat();
		Expression* const left = parse_logical_or_expression();
		match(tok::COLON, REPAIR, tok::COLON);
		Expression* const right = parse_logical_or_expression();
		check = TernaryOperation(start, check, left, right);
	}

	return check;
}

//<ExpressionOrNull> := <Expression> | NULL
Expression* const RecursiveDescent::parse_expression_or_null(){
	const Position start = get_start();
	if(will_match(tok::COMMA)){
		return new EmptyExpression(start);
	} else {
		return parse_expression();
	}
}

//<PortConnection> := . IDENT ( IDENT )

PortConnection* const RecursiveDescent::parse_port_connection(){
	const Position start = get_start();
	match(tok::PERIOD);
	Token assign = match(tok::IDENTIFIER);
	match(tok::LPAR, REPAIR);
	Token value = match(tok::IDENTIFIER);
	match(tok::RPAR, REPAIR);
	return new PortConnection(start, assign.get_lexeme(), value.get_lexeme());
}

//<ConstantExpression> := <Expression>

ConstantExpression* const RecursiveDescent::parse_constant_expression(){
	const Position start = get_start();
	Expression* const exp = parse_expression();
	return new ConstantExpression(start, exp);
}

//<logical_or_expression> := <logical_and_expression> ( || ) <logical_and_expression>

Expression* const RecursiveDescent::parse_logical_or_expression(){
	const Position start = get_start();
	Expression *const left = parse_logical_and_expression();
	while (will_match(tok::LOR)){
		eat();
		Expression *const right = parse_logical_and_expression();
		left = new LOr(start, left, right);
	}
	return left;
}

//<logical_and_expression> := <bitwise_or_expression> ( && ) <bitwise_or_expression>

Expression* const RecursiveDescent::parse_logical_and_expression(){
	const Position start = get_start();
	Expression *const left = parse_bitwise_or_expression();
	while (will_match(tok::LAND)){
		eat();
		Expression *const right = parse_bitwise_or_expression();
		left = new LAnd(start, left, right);
	}
	return left;
}

//<bitwise_or_expression> := <bitwise_xor_expression> ( | | ~| ) <bitwise_xor_expression>

Expression* const RecursiveDescent::parse_bitwise_or_expression(){
	const Position start = get_start();
	Expression *const left = parse_bitwise_xor_expression();
	while (will_match(tok::OR) || will_match(tok::NOR)){
		if (will_match(tok::NOR)) {
			eat();
			Expression *const right = parse_bitwise_xor_expression();
			left = new BOr(start, left, right);
		} else {
			match(tok::XOR);
			Expression *const right = parse_bitwise_xor_expression();
			left = new BOr(start, left, right);
		}
	}
	return left;
}

//<bitwise_xor_expression> := <bitwise_and_expression> ( ^ | ~^ | ^~ ) <bitwise_and_expression>

Expression* const RecursiveDescent::parse_bitwise_xor_expression(){
	const Position start = get_start();
	Expression *const left = parse_bitwise_and_expression();
	while (will_match(tok::XOR) || will_match(tok::XNOR)){
		if (will_match(tok::XNOR)) {
			eat();
			Expression *const right = parse_bitwise_and_expression();
			left = new BXNor(start, left, right);
		} else {
			match(tok::XOR);
			Expression *const right = parse_bitwise_and_expression();
			left = new BXor(start, left, right);
		}
	}
	return left;
}

//<bitwise_and_expression> := <equality_expression> ( & | ~& ) <equality_expression>

Expression* const RecursiveDescent::parse_bitwise_and_expression(){
	const Position start = get_start();
	Expression *const left = parse_equality_expression();
	while (will_match(tok::BAND) || will_match(tok::BNAND)){
		if (will_match(tok::BNAND)) {
			eat();
			Expression *const right = parse_equality_expression();
			left = new BAnd(start, left, right);
		} else {
			match(tok::BAND);
			Expression *const right = parse_equality_expression();
			left = new BAnd(start, left, right);
		}
	}
	return left;
}

//<equality_expression> := <rel_expression> ( != | !== | == | ===) <rel_expression>
Expression* const RecursiveDescent::parse_equality_expression(){
	const Position start = get_start();
	Expression* const left = parse_rel_expression();
	while(will_match(tok::NE1) || will_match(tok::NE2) || will_match(tok::EQ2) || will_match(tok::EQ3)){
		if(will_match(tok::NE1)){
			eat();
			Expression* const right = parse_rel_expression();
			left = new NE1(start, left, right);
		} else if(will_match(tok::NE2)){
			eat();
			Expression* const right = parse_rel_expression();
			left = new NE2(start, left, right);
		} else if(will_match(tok::EQ3)){
			eat();
			Expression* const right = parse_rel_expression();
			left = new EQ3(start, left, right);
		} else {
			match(tok::EQ2);
			Expression* const right = parse_rel_expression();
			left = new EQ2(start, left, right);
		}
	}
	return left;
}


//<rel_expression> := <shift_expression> ( < | <= | >= | > ) <shift_expression>
Expression* const RecursiveDescent::parse_rel_expression(){
	const Position start = get_start();
	Expression* const left = parse_shift_expression();
	while(will_match(tok::LE) || will_match(tok::LT) || will_match(tok::GE) || will_match(tok::GT)){
		if(will_match(tok::GT)){
			eat();
			Expression* const right = parse_shift_expression();
			left = new GT(start, left, right);
		} else if(will_match(tok::LT)){
			eat();
			Expression* const right = parse_shift_expression();
			left = new LT(start, left, right);
		} else if(will_match(tok::GE)){
			eat();
			Expression* const right = parse_shift_expression();
			left = new GE(start, left, right);
		} else {
			match(tok::LE);
			Expression* const right = parse_shift_expression();
			left = new LE(start, left, right);
		}
	}
	return left;
}

//<shift_expression> := <add_expression> ( << | >> ) <add_expression>
Expression* const RecursiveDescent::parse_shift_expression(){
	const Position start = get_start();
	Expression* const left = parse_add_expression();
	while(will_match(tok::LSHIFT) || will_match(tok::RSHIFT)){
		if(will_match(tok::LSHIFT)){
			eat();
			Expression* const right = parse_add_expression();
			left = new LShift(start, left, right);
		} else {
			match(tok::RSHIFT);
			Expression* const right = parse_add_expression();
			left = new RShift(start, left, right);
		}
	}
	return left;
}

//<add_expression> := <mult_expression> ( + | - ) <mult_expression>
Expression* const RecursiveDescent::parse_add_expression(){
	const Position start = get_start();
	Expression* const left = parse_mult_expression();
	while(will_match(tok::PLUS) || will_match(tok::MINUS)){
		if(will_match(tok::MINUS)){
			eat();
			Expression* const right = parse_mult_expression();
			left = new Sub(start, left, right);
		} else {
			match(tok::PLUS);
			Expression* const right = parse_mult_expression();
			left = new Add(start, left, right);
		}
	}
	return left;
}


//<mult_expression> := <unary_expression> ( * | % | / ) <unary_expression>
Expression* const RecursiveDescent::parse_mult_expression(){
	const Position start = get_start();
	Expression* const left = parse_unary_expression();
	while(will_match(tok::TIMES) || will_match(tok::MOD) || will_match(tok::DIV)){
		if(will_match(tok::DIV)){
			eat();
			Expression* const right = parse_unary_expression();
			left = new Div(start, left, right);
		} else if(will_match(tok::MOD)){
			eat();
			Expression* const right = parse_unary_expression();
			left = new Mod(start, left, right);
		} else {
			match(tok::TIMES);
			Expression* const right = parse_unary_expression();
			left = new Mult(start, left, right);
		}
	}
	return left;
}

//<Unary-Expression> := ( ! | - | ~ | + ) <Primary>
Expression* const RecursiveDescent::parse_unary_expression(){
	const Position start = get_start();
	if(will_match(tok::BNEG)){
		Expression* const prim = parse_primary();
		return new BNeg(start, prim);
	} else if(will_match(tok::MINUS)){
		Expression* const prim = parse_primary();
		return new Neg(start, prim);
	} else if(will_match(tok::PLUS)){
		Expression* const prim = parse_primary();
		eat();
		return parse_primary();
	} else if(will_match(tok::NOT)){
		Expression* const prim = parse_primary();
		return new LNeg(start, prim);
	} else {
		return parse_primary();
	}
}


// <Primary> := <NumValue> | <IDENTIFIER> | <Concatenation> | <SystemCall> | ( Expression ) | <MACROIDENT>

Expression* const RecursiveDescent::parse_primary(){
	const Position start = get_start();
	if (will_match(tok::NUMBER)) {
		return parse_num_value();
	} else if(will_match(tok::STRING)) {
		return parse_str_value();
	} else if (will_match(tok::MACROIDENTIFIER)) {
		return parse_macro_identifier();
	} else if (will_match(tok::IDENTIFIER)) {
		Token ident = skip();
		if (will_match(tok::LBRACK)) {
			eat();
			Expression* const index1 = parse_expression();
			if (will_match(tok::COLON)) {
				skip();
				ConstantExpression* const index2 = parse_constant_expression();
				match(tok::RBRACK);
				index1 = new ConstantExpression(index1->get_position(), index1);
				return new Slice(start, ident.get_lexeme(), index1, index2);
			} else {
				match(tok::RBRACK);
				return new Index(start, ident.get_lexeme(), index1);
			}
		} else if (will_match(tok::LPAR)) {
			eat();
			std::list<Expression* const> expressions;
			if(!will_match(tok::RPAR)){
				Expression* const exp = parse_expression();
				expressions.push_back(exp);

				while(will_match(tok::COMMA)){
					eat();
					exp = parse_expression();
					expressions.push_back(exp);
				}
			}
			match(tok::RPAR);
			return new FunctionCall(start, expressions);

		} else {
			return new Identifier(ident);
		}
	} else if (will_match(tok::LCURL)) {
		return parse_concatenation_or_replication();
	} else if (will_match(tok::LPAR)) {
		skip();
		Expression* const exp = parse_expression();
		match(tok::RPAR);
		return exp;
	} else if (will_match(tok::DOLLAR)) {
		return parse_system_function_call();
	} else {
		Token matched = peek();
		error_log.add(Error("Unexpected Primary Expression token of type " + matched.get_type() + " and lexeme " + matched.get_lexeme() + " found", matched.get_position()));
		error_log.print();
		exit(1);
		return NULL;
	}
}

// <SystemFunctionCall> := $<IDENT> [ ( <EXPLIST> ) ]
SystemFunctionCall* const RecursiveDescent::parse_system_function_call(){
	Position start = get_start();

	match(tok::DOLLAR);
	Token func_name = match(tok::IDENTIFIER);

	std::list<Expression* const> expressions;

	if(will_match(tok::LPAR)){
		eat();

		Expression* const exp = parse_expression();
		expressions.push_back(exp);

		while(will_match(tok::COMMA)){
			eat();
			exp = parse_expression();
			expressions.push_back(exp);
		}

		match(tok::RPAR);
	}

	return new SystemFunctionCall(start, func_name.get_lexeme(), expressions);
}

//<Concatenation> := { <ExpList> }
Concatenation* const RecursiveDescent::parse_concatenation(){
	Position start = get_start();

	match(tok::LCURL);

	std::list<Expression* const> expressions;

	Expression* const exp = parse_expression();
	expressions.push_back(exp);

	while(will_match(tok::COMMA)){
		skip();
		exp = parse_expression();
		expressions.push_back(exp);
	}

	match(tok::RCURL);

	return new Concatenation(start, expressions);

}

//<Replication> := { <ConstantExpression> [ <Concatenation> | <Replication> ] }
Expression* const RecursiveDescent::parse_concatenation_or_replication(){
	Position start = get_start();

	match(tok::LCURL);

	std::list<Expression* const> expressions;

	Expression* const exp = parse_expression();
	expressions.push_back(exp);

	if(will_match(tok::LCURL)){
		ConstantExpression* const times = new ConstantExpression(exp->get_position(), exp);
		Expression* const data = parse_concatenation_or_replication();
		match(tok::RCURL, REPAIR);
		return new Replication(start, times, data);
	} else {
		while(will_match(tok::COMMA)){
			eat();
			exp = parse_expression();
			expressions.push_back(exp);
		}
		match(tok::RCURL, REPAIR);
		return new Concatenation(start, expressions);
	}
}


Expression* const RecursiveDescent::parse_macro_identifier(){
	Token macro_ident = match(tok::MACROIDENTIFIER);

	//TODO -- add code to check symbol table
	return NULL;
}

Identifier* const RecursiveDescent::parse_identifier(){
	Token ident = match(tok::IDENTIFIER);
	return new Identifier(ident);
}

// NumValue -> NUM
NumValue* const RecursiveDescent::parse_num_value(){
	Position start = get_start();
	Token numToken = match(tok::NUMBER);
	return new NumValue(numToken);
}

// <StrValue> := STRING
StrValue* const RecursiveDescent::parse_str_value(){
	Position start = get_start();
	Token strToken = match(tok::STRING);
	return new StrValue(strToken);
}



