#include "ast/mod_item/declaration/UnidentifiedDeclaration.h"
#include <list>

UnidentifiedDeclaration::UnidentifiedDeclaration(const Position& position, Identifier* const ident, SymbolTable* const table): Declaration(position, table), ident(ident){
	table->insert(ident->get_symbol_name(), SymbolTable::PORT | SymbolTable::UNIDENTIFIED, position, ident);
}

UnidentifiedDeclaration::UnidentifiedDeclaration(const UnidentifiedDeclaration& declaration): Declaration(declaration), ident(declaration.ident){}

UnidentifiedDeclaration::~UnidentifiedDeclaration(){
	delete ident;
}

void UnidentifiedDeclaration::code_gen() const{

}

void UnidentifiedDeclaration::perform() const{

}
