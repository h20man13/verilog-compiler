/*
 * LAnd.h
 *
 *  Created on: Jun 14, 2021
 *      Author: jacob
 */

#ifndef LT_H
#define LT_H

#include "ast/expression/binary_operation/Binary.h"

class LT: public Binary{
public:
	LT(const Position& position, Expression* const left, Expression* const right);
	LT(const LT& binary);
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
