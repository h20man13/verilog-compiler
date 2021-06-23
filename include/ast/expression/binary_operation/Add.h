/*
 * Modulo.h
 *
 *  Created on: Jun 14, 2021
 *      Author: jacob
 */

#ifndef ADD_H
#define ADD_H

#include "ast/expression/binary_operation/Binary.h"

class Add: public Binary{
public:
	/**
	 * The Add class performs an addition operation and returns the result
	 * @tparam num_type the generic type of the number
	 * @return the result of the logical and Expression
	 */
	Object* evaluate() const= 0;

	/**
	 * The code_gen function is used to generate LLVM IR for an Addition operation
	 */
	void code_gen() const= 0;
};

#endif
