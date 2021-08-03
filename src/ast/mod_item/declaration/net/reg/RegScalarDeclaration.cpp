#include "ast/mod_item/declaration/net/reg/RegScalarDeclaration.h"


RegScalarDeclaration::RegScalarDeclaration(const Position& position, std::list<RegValue* const> &reg_list, SymbolTable* const table): Declaration(position, table), RegDeclaration(reg_list){
	for(std::list<RegValue* const>::const_iterator it = reg_list.begin(); it != reg_list.end(); it++){
		const SymbolTable::Entry* exists = table->lookup((*it)->get_symbol_name(), SymbolTable::REG, true);
		if(exists != NULL){
			table->set_attribute((*it)->get_symbol_name(), SymbolTable::REG | (*it)->get_attribute_type());
		} else {
			table->insert((*it)->get_symbol_name(), SymbolTable::REG | (*it)->get_attribute_type(), position, *it);
		}
	}
}

RegScalarDeclaration::RegScalarDeclaration(const RegScalarDeclaration& declaration): Declaration(declaration), RegDeclaration(declaration){}

void RegScalarDeclaration::code_gen() const{

}

void RegScalarDeclaration::perform() const{

}
