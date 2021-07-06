#include "ast/expression/function_call/FunctionCall.h"
#include <list>

FunctionCall::FunctionCall(const Position& position, const std::string& function_name, const std::list<Expression* const> &param_list): Expression(position), function_name(function_name){
	for(std::list<Expression* const>::const_iterator it = param_list.begin(); it != param_list.end(); it++){
		this->param_list.push_back(*it);
	}
}

FunctionCall::FunctionCall(const FunctionCall& func_call): Expression(func_call.get_position()), function_name(func_call.function_name) {
	for(std::list<Expression* const>::const_iterator it = func_call.param_list.begin(); it != func_call.param_list.end(); it++){
		this->param_list.push_back(*it);
	}
}

FunctionCall::~FunctionCall(){
	while(!param_list.empty()){
		Expression* const exp = param_list.front();
		param_list.pop_front();
		delete exp;
	}
}
