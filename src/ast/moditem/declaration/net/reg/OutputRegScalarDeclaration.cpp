#include "ast/mod_item/declaration/net/reg/OutputRegScalarDeclaration.h"

OutputRegScalarDeclaration::OutputRegScalarDeclaration(const Position& position, std::list<RegValue* const> &reg_list): RegScalarDeclaration(position, reg_list){}

OutputRegScalarDeclaration::OutputRegScalarDeclaration(const OutputRegScalarDeclaration& declaration): RegScalarDeclaration(declaration){}

void OutputRegScalarDeclaration::code_gen() const{

}

void OutputRegScalarDeclaration::perform() const{

}
