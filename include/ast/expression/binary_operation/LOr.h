/*
 * Land.h
 *
 *  Created on: Jun 14, 2021
 *      Author: jacob
 */

#ifndef LOR_H
#define LOR_H

#include "ast/expression/binary_operation/Binary.h"
#include "common/NumWrap.h"

class LOr: public Binary{
public:
	/**
	 * The evaluate method is used to interpret the Logical and Expression
	 * @tparam num_type
	 * @return a boolean from the result of the && expression
	 */
	Boolean evaluate();

	/**
	 * The code generation function that is used to emit LLVM IR
	 */
	void code_gen();
};

#endif
