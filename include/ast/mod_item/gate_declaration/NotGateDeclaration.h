/*
 * NorGateDeclaration.h
 *
 *  Created on: Jul 22, 2021
 *      Author: jacob
 */

#ifndef NOT_GATE_DECALRATION_H
#define NOT_GATE_DECALRATION_H

#include "ast/mod_item/gate_declaration/GateDeclaration.h"

class NotGateDeclaration: GateDeclaration{
public:
	NotGateDeclaration(const Position& position, std::list<Expression* const> &gate_param);
	NotGateDeclaration(const NotGateDeclaration& declaration);
	~NotGateDeclaration();
	void perform() const;
	void code_gen() const;
};



#endif /* INCLUDE_AST_MOD_ITEM_GATE_DECLARATION_GATEDECALRATION_H_ */
