/*
 * BXNor.h
 *
 *  Created on: Jun 14, 2021
 *      Author: jacob
 */

#ifndef BXNor_H
#define BXNor_H

#include "ast/expression/binary_operation/Binary.h"
#include "common/NumWrap.h"

/**
 * The binary Xnor operation performs a bitwise or with a bitwise negation at the end
 * @author Jacob Bauer
 */

class BXNor: public Binary{
public:
	/**
	 * The interpret function interprets the node and it returns an integer
	 * @return an Integer or an int object representing the function
	 */
	 Number* evaluate() const;

	/**
	 * The code gen function generates the LLVM code to be used for the Binary Xnor operation
	 */
	void code_gen() const;
};

#endif
