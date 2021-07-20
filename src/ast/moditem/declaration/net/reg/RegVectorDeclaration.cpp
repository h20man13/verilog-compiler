#include "ast/mod_item/declaration/net/reg/RegVectorDeclaration.h"

RegVectorDeclaration::RegVectorDeclaration(const Position& position, Expression* const start, Expression* const end, std::list<RegValue* const> &reg_list): VectorDeclaration(position, start, end), RegDeclaration(position, reg_list){}

RegVectorDeclaration::RegVectorDeclaration(const RegVectorDeclaration& declaration): VectorDeclaration(declaration), RegDeclaration(declaration){}

void RegVectorDeclaration::code_gen() const{

}

void RegVectorDeclaration::perform() const{

}


