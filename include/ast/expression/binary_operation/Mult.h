/*
 * Modulo.h
 *
 *  Created on: Jun 14, 2021
 *      Author: jacob
 */

#ifndef MULT_H
#define MULT_H

#include "ast/expression/binary_operation/Binary.h"

class Mult: public Binary{
public:
	Mult(const Position& position, Expression* const left, Expression* const right);
	Mult(const Mult& binary);
	/**
	 * The evaluate class is used to interpret Binary operations
	 * @tparam num_type the generic type of a Number
	 * @return a Number
	 */
	ObjBase* const evaluate();

	/**
	 * Generates LLVM IR to represent a binary addition operation
	 */
	void code_gen() const;
};

#endif
