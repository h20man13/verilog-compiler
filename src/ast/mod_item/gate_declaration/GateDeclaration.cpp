#include "ast/mod_item/gate_declaration/GateDeclaration.h"

GateDeclaration::GateDeclaration(const Position& position, std::list<Expression* const> &gate_param):ModItem(position){
	for(std::list<Expression* const>::const_iterator it = gate_param.begin(); it != gate_param.end(); it++){
		this->gate_param.push_back(*it);
	}
}

GateDeclaration::GateDeclaration(const GateDeclaration& declaration): ModItem(declaration.get_position()){
	for(std::list<Expression* const>::const_iterator it = declaration.gate_param.begin(); it != declaration.gate_param.end(); it++){
		this->gate_param.push_back(*it);
	}
}

GateDeclaration::~GateDeclaration(){
	while(!gate_param.empty()){
		Expression* const exp = *gate_param.begin();
		delete exp;
		gate_param.pop_front();
	}
}
