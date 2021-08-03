#include "ast/mod_item/FunctionDeclaration.h"


FunctionDeclaration::FunctionDeclaration(const Position& position, Declaration* const func_name, std::list<Declaration* const> param, std::list<Declaration* const> local, Statement* const statement, SymbolTable* const table): ModItem(position), table(table), func_name(func_name), statement(statement){
	for(std::list<Declaration* const>::const_iterator it = param.begin(); it != param.end(); it++){
		this->paramaters.push_back(*it);
	}
	for(std::list<Declaration* const>::const_iterator it = local.begin(); it != local.end(); it++){
		this->local.push_back(*it);
	}
}

FunctionDeclaration::FunctionDeclaration(const FunctionDeclaration& declaration): ModItem(declaration.get_position()), func_name(declaration.func_name), statement(declaration.statement), table(declaration.table){
	for(std::list<Declaration* const>::const_iterator it = declaration.paramaters.begin(); it != declaration.paramaters.end(); it++){
		this->paramaters.push_back(*it);
	}
	for(std::list<Declaration* const>::const_iterator it = declaration.local.begin(); it != declaration.local.end(); it++){
		this->local.push_back(*it);
	}
}

FunctionDeclaration::~FunctionDeclaration(){
	delete func_name;
	while(!paramaters.empty()){
		Declaration* const decl = *paramaters.begin();
		delete decl;
		paramaters.pop_front();
	}
	while(!local.empty()){
		Declaration* const decl = *local.begin();
		delete decl;
		local.pop_front();
	}
	delete statement;
}

void FunctionDeclaration::code_gen() const{

}

void FunctionDeclaration::perform() const{

}
