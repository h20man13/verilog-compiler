/*
 * LAnd.h
 *
 *  Created on: Jun 14, 2021
 *      Author: jacob
 */

#ifndef LAND_H
#define LAND_H

#include "ast/expression/binary_operation/Binary.h"

class LAnd: public Binary{
public:
	LAnd(const Position& position, Expression* const left, Expression* const right);
	LAnd(const LAnd& binary);
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
