#include "ast/expression/function_call/SystemFunctionCall.h"

#include <list>

SystemFunctionCall::SystemFunctionCall(const Position &position, const std::string &function_name, const std::list<Expression* const> &param_list) : FunctionCall(position, function_name, param_list) {}

SystemFunctionCall::SystemFunctionCall(const SystemFunctionCall& func): FunctionCall(func){};

void SystemFunctionCall::code_gen() const{
	//TODO -- generate LLVM
}

ObjBase* const SystemFunctionCall::evaluate(){
	return NULL;
}



