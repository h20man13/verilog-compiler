#include "ast/mod_item/declaration/net/reg/InputRegVectorDeclaration.h"

InputRegVectorDeclaration::InputRegVectorDeclaration(const Position& position, ConstantExpression* const start, ConstantExpression* const end, std::list<RegValue* const> &reg_list, SymbolTable* const table): Declaration(position, table), RegVectorDeclaration(position, start, end, reg_list, table){
	for(std::list<RegValue* const>::const_iterator it = reg_list.begin(); it != reg_list.end(); it++){
		table->insert((*it)->get_symbol_name(), SymbolTable::VECTOR | SymbolTable::INPUT | SymbolTable::REG | (*it)->get_attribute_type(), position, *it);
	}
}
InputRegVectorDeclaration::InputRegVectorDeclaration(const InputRegVectorDeclaration& declaration): Declaration(declaration), RegVectorDeclaration(declaration){}

void InputRegVectorDeclaration::code_gen() const{

}

void InputRegVectorDeclaration::perform() const{

}
