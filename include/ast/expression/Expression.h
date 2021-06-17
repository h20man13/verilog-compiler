/*
 * Expression.h
 *
 *  Created on: Jun 14, 2021
 *      Author: jacob
 */

#ifndef EXPRESSION_H
#define EXPRESSION_H

#include "common/Position.h"
#include "common/NumWrap.h"

/**
 * The Expression is an Interface that can be used to represent Expressions. The Expression class is a template class that changes the return type of the Interpret method
 * @author Jacob Bauer
 */


class Expression {
private:
	const Position position; //Position to store of the node
protected:
	Expression(const Position& position);
	Expression(const Expression& expression);
public:
	/**
	 * The get position method is a getter method that retrieves the position of the expression
	 * @return a position object that can be used to track the position of the class
	 */
	const Position get_position() const;

	/**
	 * The code_gen method generates the LLVM IR of the Expression
	 */
	virtual void code_gen() const = 0;

	/**
	 * The interpret method interprets the Expression directly and returns the result
	 * @return the result of the computed expression
	 */
	virtual Number evaluate() const = 0;

	virtual ~Expression();
};

#endif /* SRC_AST_EXPRESSION_EXPRESSION_H_ */
