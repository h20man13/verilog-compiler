#include "ast/mod_item/declaration/net/wire/OutputWireScalarDeclaration.h"

OutputWireScalarDeclaration::OutputWireScalarDeclaration(const Position& position, std::list<Identifier* const> &ident_list, SymbolTable* const table): Declaration(position, table), WireScalarDeclaration(position, ident_list, table){
	for(std::list<Identifier* const>::const_iterator it = ident_list.begin(); it != ident_list.end(); it++){
		table->insert((*it)->get_symbol_name(), SymbolTable::OUTPUT | SymbolTable::WIRE, position, *it);
	}
}
OutputWireScalarDeclaration::OutputWireScalarDeclaration(const OutputWireScalarDeclaration& declaration): Declaration(declaration), WireScalarDeclaration(declaration){}

void OutputWireScalarDeclaration::code_gen() const{

}

void OutputWireScalarDeclaration::perform() const{

}
