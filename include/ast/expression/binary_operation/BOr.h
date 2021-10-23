/*
 * Modulo.h
 *
 *  Created on: Jun 14, 2021
 *      Author: jacob
 */

#ifndef BOr_H
#define BOr_H

#include "ast/expression/binary_operation/Binary.h"
#include "OO-Types/include/Number.h"

/**
 * The Bitwise or operation is used to perform a bitwise or operation
 * @author Jacob Bauer
 */

class BOr: public Binary{
public:
	BOr(const Position& position, Expression* const left, Expression* const right);
	BOr(const BOr& binary);
	/**
	 * The interpret function returns a number representing the
	 * @return Integer as a result of the operation
	 */
	Object* const evaluate();

	/**
	 * The code_gen operation generates LLVM IR to represent a bitwise or operation
	 */
	void code_gen() const;
};

#endif
