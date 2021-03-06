/*
 * Expression.h
 *
 *  Created on: Jun 14, 2021
 *      Author: jacob
 */

#ifndef EXPRESSION_H
#define EXPRESSION_H

#include "ast/AstNode.h"

/**
 * The Expression is an Interface that can be used to represent Expressions. The Expression class is a template class that changes the return type of the Interpret method
 * @author Jacob Bauer
 */


class Expression: public virtual AstNode{
public:

	/**
	 * The code_gen method generates the LLVM IR of the Expression
	 */
	virtual void code_gen() const = 0;

	/**
	 * The interpret method interprets the Expression directly and returns the result
	 * @return the result of the computed expression
	 */
	 virtual Object* const evaluate() = 0;

	 /**
	  * The default destructor for expression objects
	  */
	 virtual ~Expression() = 0;
};

#endif /* SRC_AST_EXPRESSION_EXPRESSION_H_ */
