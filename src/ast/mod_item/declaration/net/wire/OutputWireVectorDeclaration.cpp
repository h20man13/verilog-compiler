#include "ast/mod_item/declaration/net/wire/OutputWireVectorDeclaration.h"

OutputWireVectorDeclaration::OutputWireVectorDeclaration(const Position &position, ConstantExpression *const start, ConstantExpression *const end, std::list<Identifier* const > &ident_list, SymbolTable* const table): Declaration(position, table), WireVectorDeclaration(position, start, end, ident_list, table) {
	for(std::list<Identifier* const>::const_iterator it = ident_list.begin(); it != ident_list.end(); it++){
		table->insert((*it)->get_symbol_name(), SymbolTable::OUTPUT | SymbolTable::WIRE | SymbolTable::VECTOR, position, *it);
	}
}

OutputWireVectorDeclaration::OutputWireVectorDeclaration(const OutputWireVectorDeclaration &declaration): Declaration(declaration), WireVectorDeclaration(declaration) {}

void OutputWireVectorDeclaration::code_gen() const {

}

void OutputWireVectorDeclaration::perform() const {

}
