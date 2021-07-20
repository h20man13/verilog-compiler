#include "ast/mod_item/declaration/net/wire/InputWireVectorDeclaration.h"

InputWireVectorDeclaration::InputWireVectorDeclaration(const Position& position, Expression* const start, Expression* const end, std::list<Identifier* const> &ident_list): WireVectorDeclaration(position, start, end, ident_list){}

InputWireVectorDeclaration::InputWireVectorDeclaration(const InputWireVectorDeclaration& declaration): WireVectorDeclaration(declaration){}

void InputWireVectorDeclaration::code_gen() const{

}

void InputWireVectorDeclaration::perform() const{

}
