#include "ast/Module.h"

Module::Module(const Position& position, Identifier* const mod_name,  std::list<Declaration* const> &decl_list, std::list<ModItem* const> &mod_item_list, SymbolTable* const table): AstNode(position), table(table), mod_name(mod_name){
	for(std::list<Declaration* const>::const_iterator it = decl_list.begin(); it != decl_list.end(); it++){
		this->decl_list.push_back(*it);
	}
	for(std::list<ModItem* const>::const_iterator it = mod_item_list.begin(); it != mod_item_list.end(); it++){
		this->mod_item_list.push_back(*it);
	}
}

Module::Module(const Module& module): AstNode(module), table(module.table), mod_name(module.mod_name){
	for(std::list<Declaration* const>::const_iterator it = module.decl_list.begin(); it != module.decl_list.end(); it++){
		this->decl_list.push_back(*it);
	}
	for(std::list<ModItem* const>::const_iterator it = module.mod_item_list.begin(); it != module.mod_item_list.end(); it++){
		this->mod_item_list.push_back(*it);
	}
}

Module::~Module(){
	while(!mod_item_list.empty()){
		ModItem* const item = *mod_item_list.begin();
		delete item;
		mod_item_list.pop_front();
	}
}

void Module::interpret() const{

}

void Module::code_gen() const{

}
