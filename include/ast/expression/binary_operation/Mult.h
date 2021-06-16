/*
 * Modulo.h
 *
 *  Created on: Jun 14, 2021
 *      Author: jacob
 */

#ifndef ADD_H
#define ADD_H

#include "ast/expression/binary_operation/Binary.h"
#include "common/NumWrap.h"

class Add: public Binary{
public:
	/**
	 * The evaluate class is used to interpret Binary operations
	 * @tparam num_type the generic type of a Number
	 * @return a Number
	 */
	Number evaluate();

	/**
	 * Generates LLVM IR to represent a binary addition operation
	 */
	void code_gen();
};

#endif
