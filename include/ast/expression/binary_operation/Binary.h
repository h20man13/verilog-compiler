/*
 * BinaryOperation.h
 *
 *  Created on: Jun 14, 2021
 *      Author: jacob
 */

#ifndef BINARY_H
#define BINARY_H

#include "ast/expression/Expression.h"
#include "common/NumWrap.h"

class Binary: public Expression{
protected:
	const Expression left;
	const Expression right;
	Binary(const Position& position, const Expression& left, const Expression& right);
	Binary(const Binary& binop);
public:

	/**
	 * The evaluate function computes the result of a Binary Expression
	 * @tparam num_type the return type of the expression
	 * @return
	 */
	template<typename num_type>
	virtual NumWrap<num_type> evaluate() = 0;

	/**
	 * The code gen method is used to generate the LLVM ir of an expression object
	 */
	virtual void code_gen() = 0;
};



#endif
