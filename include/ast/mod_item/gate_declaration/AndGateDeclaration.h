/*
 * GateDecalration.h
 *
 *  Created on: Jul 22, 2021
 *      Author: jacob
 */

#ifndef AND_GATE_DECALRATION_H
#define AND_GATE_DECALRATION_H

#include "ast/mod_item/gate_declaration/GateDeclaration.h"

class AndGateDeclaration: public GateDeclaration{
public:
	AndGateDeclaration(const Position& position, std::list<Expression* const> &gate_param);
	AndGateDeclaration(const AndGateDeclaration& declaration);
	~AndGateDeclaration();
	void perform() const;
	void code_gen() const;
};



#endif /* INCLUDE_AST_MOD_ITEM_GATE_DECLARATION_GATEDECALRATION_H_ */
