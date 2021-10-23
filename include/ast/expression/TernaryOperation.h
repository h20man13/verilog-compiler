/*
 * TernaryExpression.h
 *
 *  Created on: Jun 30, 2021
 *      Author: jacob
 */

#ifndef TERNARYOPERATION_H
#define TERNARYOPERATION_H

#include "ast/expression/Expression.h"

class TernaryOperation: public Expression{
private:
	Expression* const check;
	Expression* const left;
	Expression* const right;
public:
	TernaryOperation(const Position& position, Expression* const check, Expression* const left, Expression* const right);

	TernaryOperation(const TernaryOperation& expression);

	void code_gen() const;

	Object* const evaluate();

	~TernaryOperation();
};



#endif /* INCLUDE_AST_EXPRESSION_TERNARYEXPRESSION_H_ */
