/*
 * NorGateDeclaration.h
 *
 *  Created on: Jul 22, 2021
 *      Author: jacob
 */

#ifndef XNOR_GATE_DECALRATION_H
#define XNOR_GATE_DECALRATION_H

#include "ast/mod_item/gate_declaration/GateDeclaration.h"

class XnorGateDeclaration: public GateDeclaration{
public:
	XnorGateDeclaration(const Position& position, std::list<Expression* const> &gate_param);
	XnorGateDeclaration(const XnorGateDeclaration& declaration);
	~XnorGateDeclaration();
	void perform() const;
	void code_gen() const;
};



#endif /* INCLUDE_AST_MOD_ITEM_GATE_DECLARATION_GATEDECALRATION_H_ */
