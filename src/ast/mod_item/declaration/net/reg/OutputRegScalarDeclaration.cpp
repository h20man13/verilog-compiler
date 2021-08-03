#include "ast/mod_item/declaration/net/reg/OutputRegScalarDeclaration.h"

OutputRegScalarDeclaration::OutputRegScalarDeclaration(const Position& position, std::list<RegValue* const> &reg_list, SymbolTable* const table): Declaration(position, table), RegScalarDeclaration(position, reg_list, table){
	for(std::list<RegValue* const>::const_iterator it = reg_list.begin(); it != reg_list.end(); it++){
		table->insert((*it)->get_symbol_name(), SymbolTable::OUTPUT | SymbolTable::REG | (*it)->get_attribute_type(), position, *it);
	}
}

OutputRegScalarDeclaration::OutputRegScalarDeclaration(const OutputRegScalarDeclaration& declaration): Declaration(declaration), RegScalarDeclaration(declaration){}

void OutputRegScalarDeclaration::code_gen() const{

}

void OutputRegScalarDeclaration::perform() const{

}
