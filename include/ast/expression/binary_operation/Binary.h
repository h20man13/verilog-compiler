/*
 * BinaryOperation.h
 *
 *  Created on: Jun 14, 2021
 *      Author: jacob
 */

#ifndef BINARY_H
#define BINARY_H

#include "ast/expression/Expression.h"
#include "common/types/Number.h"

class Binary: public Expression{
protected:
	Expression* const left;
	Expression* const right;
	Binary(const Position& position, Expression* const left, Expression* const right);
	Binary(const Binary& binop);
	virtual ~Binary();
public:

	/**
	 * The evaluate function computes the result of a Binary Expression
	 * @tparam num_type the return type of the expression
	 * @return
	 */
	 virtual ObjBase* const evaluate() = 0;

	/**
	 * The code_gen method is used to generate the LLVM IR of an expression object
	 */
	 virtual void code_gen() const = 0;
};



#endif
