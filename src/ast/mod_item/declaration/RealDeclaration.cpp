#include "ast/mod_item/declaration/RealDeclaration.h"
#include <list>

RealDeclaration::RealDeclaration(const Position& position, std::list<Identifier* const> &ident_list, SymbolTable* const table): Declaration(position, table){
	for(std::list<Identifier* const>::const_iterator it = ident_list.begin(); it != ident_list.end(); it++){
		table->insert((*it)->get_symbol_name(), REAL, position, *it);
		this->ident_list.push_back(*it);
	}
}

RealDeclaration::RealDeclaration(const RealDeclaration& real_declaration): Declaration(real_declaration){
	for(std::list<Identifier* const>::const_iterator it = real_declaration.ident_list.begin(); it != real_declaration.ident_list.end(); it++){
		this->ident_list.push_back(*it);
	}
}

RealDeclaration::~RealDeclaration(){
	while(!ident_list.empty()){
		Identifier* const reg = *(ident_list.begin());
		delete reg;
		ident_list.pop_front();
	}
}

void RealDeclaration::code_gen() const{

}

void RealDeclaration::perform() const{

}
