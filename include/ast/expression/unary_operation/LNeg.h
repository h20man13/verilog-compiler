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
	/**
	 * The evaluate method is used to interpret the Logical and Expression
	 * @return a boolean from the result of the && expression
	 */
	ObjBase* const evaluate() const;

	/**
	 * The code generation function that is used to emit LLVM IR
	 */
	void code_gen() const;
};

#endif
