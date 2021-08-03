#include "ast/mod_item/declaration/net/wire/InputWireVectorDeclaration.h"

InputWireVectorDeclaration::InputWireVectorDeclaration(const Position& position, ConstantExpression* const start, ConstantExpression* const end, std::list<Identifier* const> &ident_list, SymbolTable* const table): Declaration(position, table), WireVectorDeclaration(position, start, end, ident_list, table){
	for(std::list<Identifier* const>::const_iterator it = ident_list.begin(); it != ident_list.end(); it++){
		table->insert((*it)->get_symbol_name(), SymbolTable::INPUT | SymbolTable::WIRE | SymbolTable::VECTOR, position, *it);
	}
}

InputWireVectorDeclaration::InputWireVectorDeclaration(const InputWireVectorDeclaration& declaration): Declaration(declaration), WireVectorDeclaration(declaration){}

void InputWireVectorDeclaration::code_gen() const{

}

void InputWireVectorDeclaration::perform() const{

}
