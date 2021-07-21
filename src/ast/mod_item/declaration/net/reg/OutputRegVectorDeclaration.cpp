#include "ast/mod_item/declaration/net/reg/OutputRegVectorDeclaration.h"

OutputRegVectorDeclaration::OutputRegVectorDeclaration(const Position &position, Expression *const start, Expression *const end, std::list<RegValue* const > &reg_list): RegVectorDeclaration(position, start, end, reg_list) {}

OutputRegVectorDeclaration::OutputRegVectorDeclaration(const OutputRegVectorDeclaration &declaration): RegVectorDeclaration(declaration) {}

void OutputRegVectorDeclaration::code_gen() const {

}

void OutputRegVectorDeclaration::perform() const {

}
