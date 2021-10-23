/*
 * Mult.h
 *
 *  Created on: Jun 14, 2021
 *      Author: jacob
 */

#ifndef RSHIFT_H
#define RSHIFT_H

#include "ast/expression/binary_operation/Binary.h"
#include "OO-Types/include/Number.h"
#include "OO-Types/include/Object.h"

/**
 * The bitwise and class is used to perform bitwise and operation
 * @author Jacob Bauer
 */
class RShift: public Binary{
public:
	RShift(const Position& position, Expression* const left, Expression* const right);
	RShift(const RShift& binary);
	/**
	 * The interpret method computes the bitwise operation of two numbers
	 * @param None
	 * @return an Integer object
	 */
	Object* const evaluate();

	/**
	 * The code gen method emits the LLVM code to be used to generate a bitwise and expression
	 */
	void code_gen() const;
};

#endif
