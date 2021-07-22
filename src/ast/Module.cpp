#include "ast/Module.h"

Module::Module(const Position& position, Identifier* const mod_name, std::list<ModItem* const> &mod_item_list): AstNode(position){
	for(std::list<ModItem* const>::const_iterator it = mod_item_list.begin(); it != mod_item_list.end(); it++){
		this->mod_item_list.push_back(*it);
	}
}

Module::Module(const Module& module): AstNode(module.get_position()){
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
