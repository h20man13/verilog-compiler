/*
 * LAnd.h
 *
 *  Created on: Jun 14, 2021
 *      Author: jacob
 */

#ifndef NEG_H
#define NEG_H

#include "ast/expression/unary_operation/Unary.h"

class Neg: public Unary{
public:
	Neg(const Position& position, Expression* const exp);
	/**
	 * The evaluate method is used to interpret the Logical and Expression
	 * @return an value of type object or a NULL value
	 */
	ObjBase* const evaluate();

	/**
	 * The code generation function that is used to emit LLVM IR
	 */
	void code_gen() const;
};

#endif
