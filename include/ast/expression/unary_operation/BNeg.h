/*
 * LAnd.h
 *
 *  Created on: Jun 14, 2021
 *      Author: jacob
 */

#ifndef BNEG_H
#define BNEG_H

#include "ast/expression/unary_operation/Unary.h"

/**
 * The BNeg performs a bitwise negation in verilog or a ~
 */
class BNeg: public Unary{
public:
	BNeg(const Position& position, Expression* const exp);
	/**
	 * The evaluate method is used to interpret the ~ Expression
	 * @return a boolean from the result of the && expression
	 */
	Object* const evaluate();

	/**
	 * The code generation function that is used to emit LLVM IR
	 */
	void code_gen() const;
};

#endif
