#include "ast/mod_item/declaration/net/reg/OutputRegVectorDeclaration.h"

OutputRegVectorDeclaration::OutputRegVectorDeclaration(const Position &position, ConstantExpression *const start, ConstantExpression *const end, std::list<RegValue* const > &reg_list, SymbolTable* const table): Declaration(position, table), RegVectorDeclaration(position, start, end, reg_list, table){
	for(std::list<RegValue* const>::const_iterator it = reg_list.begin(); it != reg_list.end(); it++){
		table->insert((*it)->get_symbol_name(), SymbolTable::VECTOR | SymbolTable::OUTPUT | SymbolTable::REG | (*it)->get_attribute_type(), position, *it);
	}
}

OutputRegVectorDeclaration::OutputRegVectorDeclaration(const OutputRegVectorDeclaration &declaration): Declaration(declaration), RegVectorDeclaration(declaration) {}

void OutputRegVectorDeclaration::code_gen() const {

}

void OutputRegVectorDeclaration::perform() const {

}
