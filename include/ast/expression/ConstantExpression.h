/*
 * EmptyExpression.h
 *
 *  Created on: Jun 29, 2021
 *      Author: jacob
 */

#ifndef CONSTANTEXPRESSION_H
#define CONSTANTEXPRESSION_H

#include "ast/expression/Expression.h"

class ConstantExpression: Expression{
private:
	Expression* const exp;
public:
	ConstantExpression();

	void code_gen() const;

	ObjBase* const evaluate();
};



#endif /* EMPTYEXPRESSION_H_ */
