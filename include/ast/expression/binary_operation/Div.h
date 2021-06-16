/*
 * Modulo.h
 *
 *  Created on: Jun 14, 2021
 *      Author: jacob
 */

#ifndef DIV_H
#define DIV_H

#include "ast/expression/binary_operation/Binary.h"
#include "common/NumWrap.h"

/**
 * The Div class can be used to divide two numbers
 * @param num_type returns a Number type which can be an Integer or a Float
 */

class Div: public Binary{
public:
	/**
	 * The evaluate method returns an
	 * @tparam num_type  a generic type from the NumWrapper class
	 * @return a NumWrap object
	 */

	Double evaluate();

	/**
	 * The code_gen method is used to generate LLVM IR for a Div expression
	 */
	void code_gen();
};

#endif
