/*
 * LAnd.h
 *
 *  Created on: Jun 14, 2021
 *      Author: jacob
 */

#ifndef LAND_H
#define LAND_H

#include "ast/expression/binary_operation/Binary.h"
#include "common/NumWrap.h"

class LAnd: public Binary{
public:
	/**
	 * The evaluate method is used to interpret the Logical and Expression
	 * @return a boolean from the result of the && expression
	 */
	Number* evaluate() const;

	/**
	 * The code generation function that is used to emit LLVM IR
	 */
	void code_gen() const;
};

#endif
