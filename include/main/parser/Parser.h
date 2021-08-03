/*
 * Parser.h
 *
 *  Created on: Jul 21, 2021
 *      Author: jacob
 */

#ifndef PARSER_H
#define PARSER_H

#include "ast/mod_item/ModInstance.h"
#include "ast/mod_item/ModInstantiation.h"
#include "ast/mod_item/TaskDeclaration.h"
#include "ast/mod_item/ContAssignInstance.h"
#include "ast/mod_item/ContinuousAssignment.h"
#include "ast/mod_item/declaration/IntegerDeclaration.h"
#include "ast/mod_item/declaration/RealDeclaration.h"
#include "ast/mod_item/declaration/UnidentifiedDeclaration.h"
#include "ast/mod_item/FunctionDeclaration.h"
#include "ast/mod_item/InitialStatement.h"
#include "ast/mod_item/AlwaysStatement.h"
#include "ast/mod_item/gate_declaration/AndGateDeclaration.h"
#include "ast/mod_item/gate_declaration/NandGateDeclaration.h"
#include "ast/mod_item/gate_declaration/NorGateDeclaration.h"
#include "ast/mod_item/gate_declaration/NotGateDeclaration.h"
#include "ast/mod_item/gate_declaration/OrGateDeclaration.h"
#include "ast/mod_item/gate_declaration/XnorGateDeclaration.h"
#include "ast/mod_item/gate_declaration/XorGateDeclaration.h"
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
#include "ast/statement/EmptyStatement.h"

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
#include "ast/expression/Replication.h"
#include "ast/expression/TernaryOperation.h"
#include "ast/expression/NumValue.h"
#include "ast/expression/LValue.h"
#include "ast/mod_item/declaration/RegValue.h"
#include "ast/expression/StrValue.h"
#include "ast/expression/Concatenation.h"
#include "ast/expression/PortConnection.h"
#include "ast/expression/function_call/SystemFunctionCall.h"
#include "ast/expression/ConstantExpression.h"
#include "ast/expression/Slice.h"
#include "ast/expression/Index.h"
#include "ast/expression/EmptyExpression.h"
#include "ast/expression/unary_operation/BNeg.h"
#include "ast/expression/unary_operation/LNeg.h"
#include "ast/expression/unary_operation/Neg.h"
#include "ast/expression/unary_operation/Unary.h"

#include "common/ErrorLog.h"
#include "ast/expression/Expression.h"
#include "ast/mod_item/ModItem.h"
#include "ast/statement/Statement.h"
#include "ast/Module.h"
#include "ast/File.h"

class Parser{
protected:
	ErrorLog error_log;
	std::list<const Token> token_list;
	virtual ~Parser() = 0;
	Parser(const ErrorLog& error_log, std::list<const Token> &token_list);
	Parser(const Parser& parser);
	const Position get_start() const;
public:
	virtual Expression* const parse_expression() = 0;
	virtual Statement* const parse_statement() = 0;
	virtual ModItem* const parse_mod_item() = 0;
	virtual Module*  const parse_module() = 0;
	virtual File*  const parse_file() = 0;
};



#endif /* INCLUDE_MAIN_PARSER_PARSER_H_ */
