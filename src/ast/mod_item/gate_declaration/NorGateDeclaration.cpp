#include "ast/mod_item/gate_declaration/NorGateDeclaration.h"

NorGateDeclaration::NorGateDeclaration(const Position& position, std::list<Expression* const> &gate_param): GateDeclaration(position, gate_param){}

NorGateDeclaration::NorGateDeclaration(const NorGateDeclaration& declaration): GateDeclaration(declaration){}

void NorGateDeclaration::perform() const {

}

void NorGateDeclaration::code_gen() const {

}

