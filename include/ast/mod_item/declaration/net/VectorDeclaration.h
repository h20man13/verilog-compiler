/*
 * VectorDeclaration.h
 *
 *  Created on: Jul 20, 2021
 *      Author: jacob
 */

#ifndef VECTORDECLARATION_H
#define VECTORDECLARATION_H

#include "ast/mod_item/declaration/Declaration.h"
#include "ast/expression/Expression.h"

class VectorDeclaration: Declaration{
protected:
	const Expression* start;
	const Expression* end;

	VectorDeclaration(const Position& position, const Expression* start, const Expression* end);
	VectorDeclaration(const VectorDeclaration& declaration);

	virtual ~VectorDeclaration();
public:
	virtual void code_gen() const = 0;

	virtual void perform() const = 0;

};



#endif /* INCLUDE_AST_MOD_ITEM_DECLARATION_VECTORDECLARATION_H_ */
