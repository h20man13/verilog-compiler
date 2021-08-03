#include "ast/mod_item/declaration/net/wire/InputWireScalarDeclaration.h"

InputWireScalarDeclaration::InputWireScalarDeclaration(const Position& position, std::list<Identifier* const> &ident_list, SymbolTable* const table): Declaration(position, table), WireScalarDeclaration(position, ident_list, table){
	for(std::list<Identifier* const>::const_iterator it = ident_list.begin(); it != ident_list.end(); it++){
		table->insert((*it)->get_symbol_name(), SymbolTable::INPUT | SymbolTable::WIRE, position, *it);
	}
}
InputWireScalarDeclaration::InputWireScalarDeclaration(const InputWireScalarDeclaration& declaration): Declaration(declaration), WireScalarDeclaration(declaration){}

void InputWireScalarDeclaration::code_gen() const{

}

void InputWireScalarDeclaration::perform() const{

}
