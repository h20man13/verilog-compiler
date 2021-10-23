/*
 * LAnd.h
 *
 *  Created on: Jun 14, 2021
 *      Author: jacob
 */

#ifndef EQ3_H
#define EQ3_H

#include "ast/expression/binary_operation/Binary.h"

class EQ3: public Binary{
public:
	EQ3(const Position& position, Expression* const left, Expression* const right);
	EQ3(const EQ3& binary);
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
