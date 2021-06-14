/*
 * Expression.h
 *
 *  Created on: Jun 14, 2021
 *      Author: jacob
 */

#ifndef EXPRESSION_H
#define EXPRESSION_H

#include "common/Position.h"

/**
 * The Expression is an Interface that can be used to represent Expressions. The Expression class is a template class that changes the return type of the Interpret method
 * @author Jacob Bauer
 */

template <typename ret_type>
class Expression {
private:
	const Position position; //Position to store of the node
public:
	/**
	 * The get position method is a getter method that retrieves the position of the expression
	 * @return a position object that can be used to track the position of the class
	 */
	Position get_position();
	virtual Expression(const Position& position)
	virtual ~Expression() = 0;
	virtual void code_gen() = 0;
	virtual ret_type interpret() = 0;
};

#endif /* SRC_AST_EXPRESSION_EXPRESSION_H_ */
