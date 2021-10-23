#include "ast/expression/function_call/FunctionCall.h"
#include <list>

FunctionCall::FunctionCall(const Position& position, const std::string& function_name, const std::list<Expression* const> &param_list, SymbolTable* const table): AstNode(position), table(table),function_name(function_name){
	for(std::list<Expression* const>::const_iterator it = param_list.begin(); it != param_list.end(); it++){
		this->param_list.push_back(*it);
	}
}

FunctionCall::FunctionCall(const FunctionCall& func_call): AstNode(func_call.get_position()), function_name(func_call.function_name), table(func_call.table) {
	for(std::list<Expression* const>::const_iterator it = func_call.param_list.begin(); it != func_call.param_list.end(); it++){
		this->param_list.push_back(*it);
	}
}

void FunctionCall::code_gen() const{
	//LLVM ir goes here
}

Object* const FunctionCall::evaluate(){
	return NULL;
}

FunctionCall::~FunctionCall(){
	while(!param_list.empty()){
		Expression* const exp = param_list.front();
		param_list.pop_front();
		delete exp;
	}
}
