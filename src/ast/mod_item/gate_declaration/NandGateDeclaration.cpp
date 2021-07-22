#include "ast/mod_item/gate_declaration/NandGateDeclaration.h"

NandGateDeclaration::NandGateDeclaration(const Position& position, std::list<Expression* const> &gate_param): GateDeclaration(position, gate_param){}

NandGateDeclaration::NandGateDeclaration(const NandGateDeclaration& declaration): GateDeclaration(declaration){}

void NandGateDeclaration::perform() const {

}

void NandGateDeclaration::code_gen() const {

}
