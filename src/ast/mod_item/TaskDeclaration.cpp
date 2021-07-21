#include "ast/mod_item/TaskDeclaration.h"

TaskDeclaration::TaskDeclaration(const Position& position, Identifier* const task_name, std::list<Declaration* const> param, std::list<Declaration* const> local, Statement* const statement): ModItem(position), task_name(task_name), statement(statement){
	for(std::list<Declaration* const>::const_iterator it = param.begin(); it != param.end(); it++){
		this->param.push_back(*it);
	}

	for(std::list<Declaration* const>::const_iterator it = local.begin(); it != local.end(); it++){
		this->local.push_back(*it);
	}
}

TaskDeclaration::TaskDeclaration(const TaskDeclaration& declaration): ModItem(declaration.get_position()), task_name(declaration.task_name), statement(declaration.statement){
	for(std::list<Declaration* const>::const_iterator it = declaration.param.begin(); it != declaration.param.end(); it++){
		this->param.push_back(*it);
	}

	for(std::list<Declaration* const>::const_iterator it = declaration.local.begin(); it != declaration.local.end(); it++){
		this->local.push_back(*it);
	}
}

TaskDeclaration::~TaskDeclaration(){
	delete task_name;

	while(!param.empty()){
		Declaration* const decl = *param.begin();
		delete decl;
		param.pop_back();
	}

	while(!local.empty()){
		Declaration* const decl = *local.begin();
		delete decl;
		local.pop_back();
	}

	delete statement;
}

void TaskDeclaration::code_gen() const{

}

void TaskDeclaration::perform() const{

}
