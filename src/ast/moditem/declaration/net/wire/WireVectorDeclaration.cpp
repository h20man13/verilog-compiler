#include "ast/mod_item/declaration/net/wire/WireVectorDeclaration.h"

WireVectorDeclaration::WireVectorDeclaration(const Position& position, Expression* const start, Expression* const end, std::list<Identifier* const> &ident_list): VectorDeclaration(position, start, end), WireDeclaration(position, ident_list){}

WireVectorDeclaration::WireVectorDeclaration(const WireVectorDeclaration& declaration): VectorDeclaration(declaration), WireDeclaration(declaration){}

void WireVectorDeclaration::code_gen() const{

}

void WireVectorDeclaration::perform() const{

}
