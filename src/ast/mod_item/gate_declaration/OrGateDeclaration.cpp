#include "ast/mod_item/gate_declaration/OrGateDeclaration.h"

OrGateDeclaration::OrGateDeclaration(const Position& position, std::list<Expression* const> &gate_param): GateDeclaration(position, gate_param){}

OrGateDeclaration::OrGateDeclaration(const OrGateDeclaration& declaration): GateDeclaration(declaration){}

void OrGateDeclaration::perform() const {

}

void OrGateDeclaration::code_gen() const {

}
