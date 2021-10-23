/*
 * LAnd.h
 *
 *  Created on: Jun 14, 2021
 *      Author: jacob
 */

#ifndef NE2_H
#define NE2_H

#include "ast/expression/binary_operation/Binary.h"

class NE2: public Binary{
public:
	NE2(const Position& position, Expression* const left, Expression* const right);
	NE2(const NE2& binary);
	/**
	 * The evaluate method is used to interpret the Logical and Expression
	 * @return a boolean from the result of the && expression
	 */
	Object* const evaluate();

	/**
	 * The code generation function that is used to emit LLVM IR
	 */
	void code_gen() const;
};

#endif
