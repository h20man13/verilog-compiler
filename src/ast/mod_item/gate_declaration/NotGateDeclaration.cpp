#include "ast/mod_item/gate_declaration/NotGateDeclaration.h"

NotGateDeclaration::NotGateDeclaration(const Position& position, std::list<Expression* const> &gate_param): GateDeclaration(position, gate_param){}

NotGateDeclaration::NotGateDeclaration(const NotGateDeclaration& declaration): GateDeclaration(declaration){}

void NotGateDeclaration::perform() const {

}

void NotGateDeclaration::code_gen() const {

}
