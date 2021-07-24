/*
 * LAnd.h
 *
 *  Created on: Jun 14, 2021
 *      Author: jacob
 */

#ifndef LNEG_H
#define LNEG_H

#include "ast/expression/unary_operation/Unary.h"

/**
 * The LNeg performs a logical negation on the node or !
 * @author Jacob Bauer
 */
class LNeg: public Unary{
public:
	LNeg(const Position& position, Expression* const exp);
	/**
	 * The evaluate method is used to interpret the Logical and Expression
	 * @return a boolean from the result of the && expression
	 */
	ObjBase* const evaluate();

	/**
	 * The code generation function that is used to emit LLVM IR
	 */
	void code_gen() const;
};

#endif
