/*
 * NorGateDeclaration.h
 *
 *  Created on: Jul 22, 2021
 *      Author: jacob
 */

#ifndef XOR_GATE_DECALRATION_H
#define XOR_GATE_DECALRATION_H

#include "ast/mod_item/gate_declaration/GateDeclaration.h"

class XorGateDeclaration: public GateDeclaration{
public:
	XorGateDeclaration(const Position& position, std::list<Expression* const> &gate_param);
	XorGateDeclaration(const XorGateDeclaration& declaration);
	~XorGateDeclaration();
	void perform() const;
	void code_gen() const;
};



#endif /* INCLUDE_AST_MOD_ITEM_GATE_DECLARATION_GATEDECALRATION_H_ */
