#include "ast/mod_item/declaration/net/wire/OutputWireVectorDeclaration.h"

OutputWireVectorDeclaration::OutputWireVectorDeclaration(const Position &position, Expression *const start, Expression *const end, std::list<Identifier* const > &ident_list): WireVectorDeclaration(position, start, end, ident_list) {}

OutputWireVectorDeclaration::OutputWireVectorDeclaration(const OutputWireVectorDeclaration &declaration): WireVectorDeclaration(declaration) {}

void OutputWireVectorDeclaration::code_gen() const {

}

void OutputWireVectorDeclaration::perform() const {

}
