#include "ast/mod_item/declaration/net/wire/WireVectorDeclaration.h"

WireVectorDeclaration::WireVectorDeclaration(const Position& position, ConstantExpression* const start, ConstantExpression* const end, std::list<Identifier* const> &ident_list, SymbolTable* const table): Declaration(position, table), VectorDeclaration(start, end), WireDeclaration(ident_list){
	for(std::list<Identifier* const>::const_iterator it = ident_list.begin(); it != ident_list.end(); it++){
		const SymbolTable::Entry* exists = table->lookup((*it)->get_symbol_name(), SymbolTable::WIRE | SymbolTable::VECTOR, true);
		if(exists != NULL){
			table->set_attribute((*it)->get_symbol_name(), SymbolTable::WIRE | SymbolTable::VECTOR);
		} else {
			table->insert((*it)->get_symbol_name(), SymbolTable::WIRE | SymbolTable::VECTOR, position, *it);
		}
	}
}

WireVectorDeclaration::WireVectorDeclaration(const WireVectorDeclaration& declaration): Declaration(declaration), VectorDeclaration(declaration), WireDeclaration(declaration){}

void WireVectorDeclaration::code_gen() const{
}

void WireVectorDeclaration::perform() const{

}
