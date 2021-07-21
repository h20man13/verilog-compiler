#include "ast/mod_item/declaration/net/wire/WireScalarDeclaration.h"


WireScalarDeclaration::WireScalarDeclaration(const Position& position, std::list<Identifier* const> &ident_list): WireDeclaration(position, ident_list), ScalarDeclaration(position){}

WireScalarDeclaration::WireScalarDeclaration(const WireScalarDeclaration& declaration): WireDeclaration(declaration), ScalarDeclaration(declaration){}

void WireScalarDeclaration::code_gen() const{

}

void WireScalarDeclaration::perform() const{

}
