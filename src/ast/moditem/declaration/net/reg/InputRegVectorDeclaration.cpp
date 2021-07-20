#include "ast/mod_item/declaration/net/reg/InputRegVectorDeclaration.h"

InputRegVectorDeclaration::InputRegVectorDeclaration(const Position& position, Expression* const start, Expression* const end, std::list<RegValue* const> &reg_list): RegVectorDeclaration(position, start, end, reg_list){}
InputRegVectorDeclaration::InputRegVectorDeclaration(const InputRegVectorDeclaration& declaration): RegVectorDeclaration(declaration){}

void InputRegVectorDeclaration::code_gen() const{

}

void InputRegVectorDeclaration::perform() const{

}
