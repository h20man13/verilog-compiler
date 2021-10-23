#include "ast/expression/function_call/SystemFunctionCall.h"

#include <list>

SystemFunctionCall::SystemFunctionCall(const Position &position, const std::string &function_name, const std::list<Expression* const> &param_list, SymbolTable* const table) : AstNode(position), FunctionCall(position, function_name, param_list, table) {}

SystemFunctionCall::SystemFunctionCall(const SystemFunctionCall& func): AstNode(func), FunctionCall(func){};

void SystemFunctionCall::code_gen() const{
	//TODO -- generate LLVM
}

Object* const SystemFunctionCall::evaluate(){
	return NULL;
}



