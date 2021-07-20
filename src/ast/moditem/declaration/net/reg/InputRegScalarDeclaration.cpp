#include "ast/mod_item/declaration/net/reg/InputRegScalarDeclaration.h"

InputRegScalarDeclaration::InputRegScalarDeclaration(const Position& position, std::list<RegValue* const> &reg_list): RegScalarDeclaration(position, reg_list){}
InputRegScalarDeclaration::InputRegScalarDeclaration(const InputRegScalarDeclaration& declaration): RegScalarDeclaration(declaration){}

void InputRegScalarDeclaration::code_gen() const{

}

void InputRegScalarDeclaration::perform() const{

}
