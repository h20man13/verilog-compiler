#include "ast/mod_item/declaration/net/reg/RegVectorDeclaration.h"

RegVectorDeclaration::RegVectorDeclaration(const Position& position, ConstantExpression* const start, ConstantExpression* const end, std::list<RegValue* const> &reg_list, SymbolTable* const table): Declaration(position, table), VectorDeclaration(start, end), RegDeclaration(reg_list){
	for(std::list<RegValue* const>::const_iterator it = reg_list.begin(); it != reg_list.end(); it++){
		const SymbolTable::Entry* exists = table->lookup((*it)->get_symbol_name(), SymbolTable::REG, true);
		if(exists != NULL){
			table->set_attribute((*it)->get_symbol_name(), SymbolTable::VECTOR | SymbolTable::REG | (*it)->get_attribute_type());
		} else {
			table->insert((*it)->get_symbol_name(), SymbolTable::VECTOR | SymbolTable::REG | (*it)->get_attribute_type(), position, *it);
		}
	}
}

RegVectorDeclaration::RegVectorDeclaration(const RegVectorDeclaration& declaration): Declaration(declaration), VectorDeclaration(declaration), RegDeclaration(declaration){}

void RegVectorDeclaration::code_gen() const{

}

void RegVectorDeclaration::perform() const{

}


