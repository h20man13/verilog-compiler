#include "ast/mod_item/ModInstantiation.h"

ModInstantiation::ModInstantiation(const Position& position, Identifier* const ident, std::list<ModInstance* const> &item_list): ModItem(position), ident(ident){
	for(std::list<ModInstance* const>::const_iterator it = item_list.begin(); it != item_list.end(); it++){
		this->item_list.push_back(*it);
	}
}

ModInstantiation::ModInstantiation(const ModInstantiation& instance): ModItem(instance.get_position()), ident(instance.ident){
	for(std::list<ModInstance* const>::const_iterator it = instance.item_list.begin(); it != instance.item_list.end(); it++){
		this->item_list.push_back(*it);
	}
}

ModInstantiation::~ModInstantiation(){
	while(!item_list.empty()){
		ModInstance* const instance = *item_list.begin();
		delete instance;
		item_list.pop_front();
	}
}

void ModInstantiation::code_gen() const{

}

void ModInstantiation::perform() const{

}
