/*
 * EmptyExpression.h
 *
 *  Created on: Jun 29, 2021
 *      Author: jacob
 */

#ifndef EMPTYEXPRESSION_H
#define EMPTYEXPRESSION_H

#include "ast/expression/Expression.h"

class EmptyExpression: Expression{
public:
	EmptyExpression();

	void code_gen() const;

	ObjBase* const evaluate();
};



#endif /* EMPTYEXPRESSION_H_ */
