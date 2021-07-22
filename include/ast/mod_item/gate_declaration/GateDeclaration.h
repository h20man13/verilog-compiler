/*
 * GateDecalration.h
 *
 *  Created on: Jul 22, 2021
 *      Author: jacob
 */

#ifndef GATEDECLARATION_H
#define GATEDECLARATION_H

#include "ast/mod_item/ModItem.h"
#include "ast/expression/Expression.h"
#include <list>

class GateDeclaration: ModItem{
protected:
	std::list<Expression* const> gate_param;
public:
	GateDeclaration(const Position& position, std::list<Expression* const> &gate_param);
	GateDeclaration(const GateDeclaration& declaration);
	~GateDeclaration();
	virtual void perform() const = 0;
	virtual void code_gen() const = 0;
};



#endif /* INCLUDE_AST_MOD_ITEM_GATE_DECLARATION_GATEDECALRATION_H_ */
