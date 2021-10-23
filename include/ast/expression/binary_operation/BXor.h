/*
 * BXNor.h
 *
 *  Created on: Jun 14, 2021
 *      Author: jacob
 */

#ifndef BXor_H
#define BXor_H

#include "ast/expression/binary_operation/Binary.h"
#include "OO-Types/include/Number.h"

/**
 * The binary Xnor operation performs a bitwise or with a bitwise negation at the end
 * @author Jacob Bauer
 */

class BXor: public Binary{
public:
	BXor(const Position& position, Expression* const left, Expression* const right);
	BXor(const BXor& binary);
	/**
	 * The interpret function interprets the node and it returns an integer
	 * @return an Integer or an int object representing the function
	 */
	 Object* const evaluate();

	/**
	 * The code gen function generates the LLVM code to be used for the Binary Xnor operation
	 */
	void code_gen() const;
};

#endif
