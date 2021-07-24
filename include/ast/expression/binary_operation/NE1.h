/*
 * LAnd.h
 *
 *  Created on: Jun 14, 2021
 *      Author: jacob
 */

#ifndef NE1_H
#define NE1_H

#include "ast/expression/binary_operation/Binary.h"

class NE1: public Binary{
public:
	NE1(const Position& position, Expression* const left, Expression* const right);
	NE1(const NE1& binary);
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
