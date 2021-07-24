/*
 * Parser.h
 *
 *  Created on: Jul 21, 2021
 *      Author: jacob
 */

#ifndef RECURSIVE_DESCENT_H
#define RECURSIVE_DESCENT_H

#include "main/parser/Parser.h"

#include "ast/mod_item/declaration/net/wire/InputWireScalarDeclaration.h"
#include "ast/mod_item/declaration/net/wire/InputWireVectorDeclaration.h"
#include "ast/mod_item/declaration/net/reg/InputRegScalarDeclaration.h"
#include "ast/mod_item/declaration/net/reg/InputRegVectorDeclaration.h"
#include "ast/mod_item/declaration/net/wire/OutputWireScalarDeclaration.h"
#include "ast/mod_item/declaration/net/wire/OutputWireVectorDeclaration.h"
#include "ast/mod_item/declaration/net/reg/OutputRegScalarDeclaration.h"
#include "ast/mod_item/declaration/net/reg/OutputRegVectorDeclaration.h"
#include "ast/mod_item/declaration/net/wire/WireScalarDeclaration.h"
#include "ast/mod_item/declaration/net/wire/WireVectorDeclaration.h"
#include "ast/mod_item/declaration/net/reg/RegScalarDeclaration.h"
#include "ast/mod_item/declaration/net/reg/RegVectorDeclaration.h"
//statement classes
#include "ast/statement/For.h"
#include "ast/statement/Forever.h"
#include "ast/statement/Repeat.h"
#include "ast/statement/ReturnStatement.h"
#include "ast/statement/SequentialBlock.h"
#include "ast/statement/Wait.h"
#include "ast/statement/While.h"
#include "ast/statement/if/If.h"
#include "ast/statement/if/IfElse.h"
#include "ast/statement/assignment/Blocking.h"
#include "ast/statement/assignment/NonBlocking.h"
#include "ast/statement/case/CaseX.h"
#include "ast/statement/case/CaseZ.h"
#include "ast/statement/case/DefaultItem.h"
#include "ast/statement/case/ExprItem.h"
#include "ast/statement/task_call/TaskCall.h"
#include "ast/statement/task_call/SystemTaskCall.h"

//expression classes
#include "ast/expression/binary_operation/Mult.h"
#include "ast/expression/binary_operation/Mod.h"
#include "ast/expression/binary_operation/Div.h"
#include "ast/expression/binary_operation/Sub.h"
#include "ast/expression/binary_operation/Add.h"
#include "ast/expression/binary_operation/LShift.h"
#include "ast/expression/binary_operation/RShift.h"
#include "ast/expression/binary_operation/LE.h"
#include "ast/expression/binary_operation/GE.h"
#include "ast/expression/binary_operation/LT.h"
#include "ast/expression/binary_operation/GT.h"
#include "ast/expression/binary_operation/NE1.h"
#include "ast/expression/binary_operation/NE2.h"
#include "ast/expression/binary_operation/EQ2.h"
#include "ast/expression/binary_operation/EQ3.h"
#include "ast/expression/binary_operation/BAnd.h"
#include "ast/expression/binary_operation/BOr.h"
#include "ast/expression/binary_operation/BXor.h"
#include "ast/expression/binary_operation/BXNor.h"
#include "ast/expression/binary_operation/LAnd.h"
#include "ast/expression/binary_operation/LOr.h"
#include "ast/expression/Identifier.h"
#include "ast/expression/TernaryOperation.h"
#include "ast/expression/NumValue.h"
#include "ast/expression/LValue.h"
#include "ast/mod_item/declaration/RegValue.h"
#include "ast/expression/StrValue.h"
#include "ast/expression/Concatenation.h"
#include "ast/expression/function_call/SystemFunctionCall.h"
#include "ast/expression/ConstantExpression.h"
#include "ast/expression/Slice.h"
#include "ast/expression/Index.h"
#include "ast/expression/unary_operation/BNeg.h"
#include "ast/expression/unary_operation/LNeg.h"
#include "ast/expression/unary_operation/Neg.h"
#include "ast/expression/unary_operation/Unary.h"



#include "Token.h"
#include "common/Error.h"


enum error_action{
	ABORT,
	SKIP,
	REPAIR
};

class RecursiveDescent: Parser{
private:
	//main parsing methods
	void eat();
	bool eat_if_yummy(const tok type);
	Token match(const tok type, const enum error_action=ABORT, const tok delim=type);
	Token skip();
	Token peek(int ahead = 0);
	bool will_match(const tok type, int ahead = 0);

	//ast node parsing methods
	//module
	Declaration* const parse_module_par_declaration();
	//statements

	For* const parse_for_statement();
	SequentialBlock* const parse_sequential_block();
	Wait* const parse_wait_statement();
	While* const parse_while_statement();
	Repeat* const parse_repeat_statement();
	Forever* const parse_forever_statement();
	CaseX* const parse_casex_statement();
	CaseZ* const parse_casez_statement();
	Case* const parse_case_statement();

	CaseItem* const parse_case_item();

	If* const parse_if_statement();
	ProceduralAssignment* const parse_procedural_assignment(LValue* const lvalue);


	//expressions
	LValue* const parse_l_value();
	RegValue* const parse_reg_value();
	Expression* const parse_logical_or_expression();
	Expression* const parse_logical_and_expression();
	Expression* const parse_bitwise_or_expression();
	Expression* const parse_bitwise_xor_expression();
	Expression* const parse_bitwise_and_expression();
	Expression* const parse_equality_expression();
	Expression* const parse_rel_expression();
	Expression* const parse_shift_expression();
	Expression* const parse_add_expression();
	Expression* const parse_mult_expression();
	Expression* const parse_unary_expression();
	ConstantExpression* const parse_constant_expression();
	Expression* const parse_primary();
	SystemFunctionCall* const parse_system_function_call()
	Concatenation* const parse_concatenation();
	Expression* const parse_macro_identifier();
	Identifier* const parse_identifier();
	NumValue* const parse_num_value();
	StrValue* const parse_str_value();
protected:
	virtual ~RecursiveDescent();
public:
	Expression* const parse_expression() = 0;
	Statement* const parse_statement() = 0;
    ModItem* const parse_mod_item() = 0;
	Module* const parse_module() = 0;
	File* const parse_file() = 0;
};



#endif /* INCLUDE_MAIN_PARSER_PARSER_H_ */