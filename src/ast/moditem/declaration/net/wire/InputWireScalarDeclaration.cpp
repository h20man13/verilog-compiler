#include "ast/mod_item/declaration/net/wire/InputWireScalarDeclaration.h"

InputWireScalarDeclaration::InputWireScalarDeclaration(const Position& position, std::list<Identifier* const> &ident_list): WireScalarDeclaration(position, ident_list){}
InputWireScalarDeclaration::InputWireScalarDeclaration(const InputWireScalarDeclaration& declaration): WireScalarDeclaration(declaration){}

void InputWireScalarDeclaration::code_gen() const{

}

void InputWireScalarDeclaration::perform() const{

}
