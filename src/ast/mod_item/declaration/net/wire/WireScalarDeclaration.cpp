#include "ast/mod_item/declaration/net/wire/WireScalarDeclaration.h"


WireScalarDeclaration::WireScalarDeclaration(const Position& position, std::list<Identifier* const> &ident_list, SymbolTable* const table): Declaration(position, table), WireDeclaration(ident_list){
	for(std::list<Identifier* const>::const_iterator it = ident_list.begin(); it != ident_list.end(); it++){
		const SymbolTable::Entry* exists = table->lookup((*it)->get_symbol_name(), SymbolTable::WIRE, true);
		if(exists != NULL){
			table->set_attribute((*it)->get_symbol_name(), SymbolTable::WIRE);
		} else {
			table->insert((*it)->get_symbol_name(), SymbolTable::WIRE, position, *it);
		}
	}
}

WireScalarDeclaration::WireScalarDeclaration(const WireScalarDeclaration& declaration): Declaration(declaration), WireDeclaration(declaration){}

void WireScalarDeclaration::code_gen() const{

}

void WireScalarDeclaration::perform() const{

}
