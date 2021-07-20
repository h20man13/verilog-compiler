#include "ast/mod_item/declaration/net/reg/RegScalarDeclaration.h"


RegScalarDeclaration::RegScalarDeclaration(const Position& position, std::list<RegValue* const> &reg_list): RegDeclaration(position, reg_list), ScalarDeclaration(position){}

RegScalarDeclaration::RegScalarDeclaration(const RegScalarDeclaration& declaration): RegDeclaration(declaration), ScalarDeclaration(declaration){}

void RegScalarDeclaration::code_gen() const{

}

void RegScalarDeclaration::perform() const{

}
