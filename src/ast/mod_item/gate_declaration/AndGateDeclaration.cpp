#include "ast/mod_item/gate_declaration/AndGateDeclaration.h"

AndGateDeclaration::AndGateDeclaration(const Position& position, std::list<Expression* const> &gate_param): GateDeclaration(position, gate_param){}

AndGateDeclaration::AndGateDeclaration(const AndGateDeclaration& declaration): GateDeclaration(declaration){}

void AndGateDeclaration::perform() const {

}

void AndGateDeclaration::code_gen() const {

}
