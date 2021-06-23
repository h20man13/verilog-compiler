/*
 * Modulo.h
 *
 *  Created on: Jun 14, 2021
 *      Author: jacob
 */

#ifndef BOr_H
#define BOr_H

#include "ast/expression/binary_operation/Binary.h"
#include "common/types/Number.h"

/**
 * The Bitwise or operation is used to perform a bitwise or operation
 * @author Jacob Bauer
 */

class BOr: public Binary{
public:
	/**
	 * The interpret function returns a number representing the
	 * @return Integer as a result of the operation
	 */
	Number* evaluate() const;

	/**
	 * The code_gen operation generates LLVM IR to represent a bitwise or operation
	 */
	void code_gen() const;
};

#endif
