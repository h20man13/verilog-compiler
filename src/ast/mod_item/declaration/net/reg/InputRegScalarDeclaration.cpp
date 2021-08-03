#include "ast/mod_item/declaration/net/reg/InputRegScalarDeclaration.h"

InputRegScalarDeclaration::InputRegScalarDeclaration(const Position& position, std::list<RegValue* const> &reg_list, SymbolTable* const table): Declaration(position, table), RegScalarDeclaration(position, reg_list, table){
	for(std::list<RegValue* const>::const_iterator it = reg_list.begin(); it != reg_list.end(); it++){
			table->insert((*it)->get_symbol_name(), SymbolTable::INPUT | SymbolTable::REG | (*it)->get_attribute_type(), position, *it);
	}
}

InputRegScalarDeclaration::InputRegScalarDeclaration(const InputRegScalarDeclaration& declaration): Declaration(declaration), RegScalarDeclaration(declaration){}

void InputRegScalarDeclaration::code_gen() const{

}

void InputRegScalarDeclaration::perform() const{

}
