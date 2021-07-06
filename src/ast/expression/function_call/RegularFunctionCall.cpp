#include <list>
#include "ast/expression/function_call/RegularFunctionCall.h"

RegularFunctionCall::RegularFunctionCall(const Position& position, const std::string& function_name, const std::list<Expression* const> &concat_list): FunctionCall(position, function_name, concat_list){}

RegularFunctionCall::RegularFunctionCall(const RegularFunctionCall& func): FunctionCall(func) {}

void RegularFunctionCall::code_gen() const {
	//TODO fill in this llvm code later
}

ObjBase* const RegularFunctionCall::evaluate(){
	return NULL;
}


