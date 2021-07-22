#include "ast/mod_item/gate_declaration/XnorGateDeclaration.h"

XnorGateDeclaration::XnorGateDeclaration(const Position& position, std::list<Expression* const> &gate_param): GateDeclaration(position, gate_param){}

XnorGateDeclaration::XnorGateDeclaration(const XnorGateDeclaration& declaration): GateDeclaration(declaration){}

void XnorGateDeclaration::perform() const {

}

void XnorGateDeclaration::code_gen() const {

}
