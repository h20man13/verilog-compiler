#include "ast/statement/task_call/SystemTaskCall.h"


SystemTaskCall::SystemTaskCall(const Position& position, const std::string& function_name, const std::list<Expression* const> &param_list): TaskCall(position, function_name, param_list){}

SystemTaskCall::SystemTaskCall(const SystemTaskCall& func): TaskCall(func){}


void SystemTaskCall::code_gen() const {

}

void SystemTaskCall::execute() const{


}
