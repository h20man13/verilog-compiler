#include "ast/statement/task_call/TaskCall.h"
#include <list>

TaskCall::TaskCall(const Position& position, const std::string& function_name, const std::list<Expression* const> &param_list): Statement(position), function_name(function_name) {
	for(std::list<Expression* const>::const_iterator it = param_list.begin(); it != param_list.end(); it++){
		this->param_list.push_back(*it);
	}
}

TaskCall::TaskCall(const TaskCall& func_call): Statement(func_call.get_position()), function_name(func_call.function_name) {
	for(std::list<Expression* const>::const_iterator it = func_call.param_list.begin(); it != func_call.param_list.end(); it++){
			this->param_list.push_back(*it);
	}
}

void TaskCall::code_gen() const {

}

void TaskCall::execute() const {

}

TaskCall::~TaskCall(){
	while(!param_list.empty()){
		Expression* const param = *(param_list.begin());
		param_list.pop_front();
		delete param;
	}
}
