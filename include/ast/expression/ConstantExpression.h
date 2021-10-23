/*
 * EmptyExpression.h
 *
 *  Created on: Jun 29, 2021
 *      Author: jacob
 */

#ifndef CONSTANTEXPRESSION_H
#define CONSTANTEXPRESSION_H

#include "ast/expression/Expression.h"

/**
 * The constant expression Ast node class is used to check constant expressions
 * @author Jacob Bauer
 */
class ConstantExpression: public Expression{
private:
	Expression* const expression; //the expression that was deemed constant
public:
	/**
	 * The Constant Expression constructor creates a constant expression given two parameters
	 * @param position  the position of the ast node object
	 * @param expression  the expression that was deemed to be const
	 */
	ConstantExpression(const Position& position, Expression* const expression);

	/**
	 * The constant expression copy constructor is use dto make a copy of the constant expression
	 * @param expression
	 */

	ConstantExpression(const ConstantExpression& expression);

	/**
	 * The code generation function is used to generate the corresponding llvm IR
	 */
	void code_gen() const;

	/**
	 * The evaluate function is used to evaluate expressions and determine their result
	 * @return  an object representing the result of the function
	 */
	Object* const evaluate();

	/**
	 * The constant expression desturctor
	 * This just calls the expression objects destructor
	 */
	~ConstantExpression();
};



#endif /* EMPTYEXPRESSION_H_ */
