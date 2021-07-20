#include "ast/mod_item/declaration/net/wire/WireDeclaration.h"


WireDeclaration::WireDeclaration(const Position& position, std::list<Identifier* const> &ident_list): Declaration(position){
	for(std::list<Identifier* const>::const_iterator it = ident_list.begin(); it != ident_list.end(); it++){
		this->ident_list.push_back(*it);
	}
}

WireDeclaration::WireDeclaration(const WireDeclaration& declaration): Declaration(declaration.get_position()){
	for(std::list<Identifier* const>::const_iterator it = declaration.ident_list.begin(); it != declaration.ident_list.end(); it++){
		this->ident_list.push_back(*it);
	}
}

WireDeclaration::~WireDeclaration(){
	while(!ident_list.empty()){
		Identifier* const reg = *(ident_list.begin());
		delete reg;
		ident_list.pop_front();
	}
}
