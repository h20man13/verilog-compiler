/*
 * Mult.h
 *
 *  Created on: Jun 14, 2021
 *      Author: jacob
 */

#ifndef RSHIFT_H
#define RSHIFT_H

#include "ast/expression/binary_operation/Binary.h"
#include "common/types/Number.h"
#include "common/types/Object.h"

/**
 * The bitwise and class is used to perform bitwise and operation
 * @author Jacob Bauer
 */
class RShift: public Binary{
public:
	/**
	 * The interpret method computes the bitwise operation of two numbers
	 * @param None
	 * @return an Integer object
	 */
	ObjBase* const evaluate() const;

	/**
	 * The code gen method emits the LLVM code to be used to generate a bitwise and expression
	 */
	void code_gen() const;
};

#endif
