/*
 * Unary.h
 *
 *  Created on: Jun 14, 2021
 *      Author: jacob
 */

#ifndef UNARY_H
#define UNARY_H

#include "ast/expression/Expression.h"
#include "common/types/Number.h"

class Unary: public Expression{
protected:
	const Expression* exp;
	Unary(const Position& position, const Expression& exp);
	Unary(const Unary& binop);
	virtual ~Unary();
public:

	/**
	 * The evaluate function computes the result of a Binary Expression
	 * @tparam num_type the return type of the expression
	 * @return
	 */
	 virtual ObjBase* const evaluate() const = 0;

	/**
	 * The code_gen method is used to generate the LLVM IR of an expression object
	 */
	 virtual void code_gen() const = 0;
};



#endif
