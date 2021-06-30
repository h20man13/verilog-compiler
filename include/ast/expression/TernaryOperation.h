/*
 * TernaryExpression.h
 *
 *  Created on: Jun 30, 2021
 *      Author: jacob
 */

#ifndef TERNARYOPERATION_H
#define TERNARYOPERATION_H

#include "ast/expression/Expression.h"

class TernaryOperation: Expression{
private:
	Position position;
	Expression* const check;
	Expression* const left;
	Expression* const right;
public:
	TernaryOperation(const Position& position, const Expression* const check, const Expression* const left, const Expression* const right);

	void code_gen() const;

	ObjBase* const evaluate();

	~TernaryOperation();
};



#endif /* INCLUDE_AST_EXPRESSION_TERNARYEXPRESSION_H_ */
