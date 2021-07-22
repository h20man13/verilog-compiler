/*
 * NandGateDecalration.h
 *
 *  Created on: Jul 22, 2021
 *      Author: jacob
 */

#ifndef NAND_GATE_DECALRATION_H
#define NAND_GATE_DECALRATION_H

#include "ast/mod_item/gate_declaration/GateDeclaration.h"

class NandGateDeclaration: GateDeclaration{
public:
	NandGateDeclaration(const Position& position, std::list<Expression* const> &gate_param);
	NandGateDeclaration(const NandGateDeclaration& declaration);
	~NandGateDeclaration();
	void perform() const = 0;
	void code_gen() const = 0;
};



#endif /* INCLUDE_AST_MOD_ITEM_GATE_DECLARATION_GATEDECALRATION_H_ */
