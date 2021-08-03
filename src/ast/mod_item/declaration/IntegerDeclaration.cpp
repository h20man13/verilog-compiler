#include "ast/mod_item/declaration/IntegerDeclaration.h"
#include "ast/expression/Identifier.h"
#include "ast/expression/Index.h"
#include <list>

IntegerDeclaration::IntegerDeclaration(const Position& position, std::list<RegValue* const> &reg_list, SymbolTable* const table): Declaration(position, table){
	for(std::list<RegValue* const>::const_iterator it = reg_list.begin(); it != reg_list.end(); it++){
		table->insert((*it)->get_symbol_name(), SymbolTable::INTEGER | (*it)->get_attribute_type(), position, *it);
		this->reg_list.push_back(*it);
	}
}

IntegerDeclaration::IntegerDeclaration(const IntegerDeclaration& real_declaration): Declaration(real_declaration){
	for(std::list<RegValue* const>::const_iterator it = real_declaration.reg_list.begin(); it != real_declaration.reg_list.end(); it++){
		this->reg_list.push_back(*it);
	}
}

IntegerDeclaration::~IntegerDeclaration(){
	while(!reg_list.empty()){
		RegValue* const reg = *(reg_list.begin());
		delete reg;
		reg_list.pop_front();
	}
}

void IntegerDeclaration::code_gen() const{

}

void IntegerDeclaration::perform() const{

}
