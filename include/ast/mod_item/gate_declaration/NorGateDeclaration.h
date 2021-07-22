/*
 * NorGateDeclaration.h
 *
 *  Created on: Jul 22, 2021
 *      Author: jacob
 */

#ifndef NOR_GATE_DECALRATION_H
#define NOR_GATE_DECALRATION_H

#include "ast/mod_item/gate_declaration/GateDeclaration.h"

class NorGateDeclaration: GateDeclaration{
public:
	NorGateDeclaration(const Position& position, std::list<Expression* const> &gate_param);
	NorGateDeclaration(const NorGateDeclaration& declaration);
	~NorGateDeclaration();
	void perform() const = 0;
	void code_gen() const = 0;
};



#endif /* INCLUDE_AST_MOD_ITEM_GATE_DECLARATION_GATEDECALRATION_H_ */
