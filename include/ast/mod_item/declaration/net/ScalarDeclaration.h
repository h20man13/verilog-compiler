/*
 * ScalarDeclaration.h
 *
 *  Created on: Jul 20, 2021
 *      Author: jacob
 */

#ifndef SCALARDECLARATION_H
#define SCALARDECLARATION_H

#include "ast/mod_item/declaration/Declaration.h"

class ScalarDeclaration: Declaration{
protected:
	virtual ~ScalarDeclaration() = 0;
	ScalarDeclaration(const Position& position);
	ScalarDeclaration(const ScalarDeclaration& declaration);

public:
	virtual void code_gen() const = 0;

	virtual void perform() const = 0;
};



#endif /* INCLUDE_AST_MOD_ITEM_DECLARATION_SCALARDECLARATION_H_ */
