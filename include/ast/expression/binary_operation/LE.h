/*
 * LAnd.h
 *
 *  Created on: Jun 14, 2021
 *      Author: jacob
 */

#ifndef LE_H
#define LE_H

#include "ast/expression/binary_operation/Binary.h"

class LE: public Binary{
public:
	LE(const Position& position, Expression* const left, Expression* const right);
	LE(const LE& binary);
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
