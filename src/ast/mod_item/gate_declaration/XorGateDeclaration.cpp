#include "ast/mod_item/gate_declaration/XorGateDeclaration.h"

XorGateDeclaration::XorGateDeclaration(const Position& position, std::list<Expression* const> &gate_param): GateDeclaration(position, gate_param){}

XorGateDeclaration::XorGateDeclaration(const XorGateDeclaration& declaration): GateDeclaration(declaration){}

void XorGateDeclaration::perform() const {

}

void XorGateDeclaration::code_gen() const {

}
