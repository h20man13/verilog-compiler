/*
 * EmptyExpression.h
 *
 *  Created on: Jun 29, 2021
 *      Author: jacob
 */

#ifndef EMPTYEXPRESSION_H
#define EMPTYEXPRESSION_H

#include "ast/expression/Expression.h"

/**
 * The empty expression class is just used as a place holder this makes it easier for visitor objects since they will not have to check for null
 * @author Jacob Bauer
 */
class EmptyExpression: public Expression{
public:
	EmptyExpression(const Position& position);
	EmptyExpression(const EmptyExpression& exp);

	void code_gen() const;

	Object* const evaluate();
};



#endif
