#include "ast/mod_item/declaration/net/wire/OutputWireScalarDeclaration.h"

OutputWireScalarDeclaration::OutputWireScalarDeclaration(const Position& position, std::list<Identifier* const> &ident_list): WireScalarDeclaration(position, ident_list){}
OutputWireScalarDeclaration::OutputWireScalarDeclaration(const OutputWireScalarDeclaration& declaration): WireScalarDeclaration(declaration){}

void OutputWireScalarDeclaration::code_gen() const{

}

void OutputWireScalarDeclaration::perform() const{

}
