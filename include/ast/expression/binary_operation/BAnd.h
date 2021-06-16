/*
 * Mult.h
 *
 *  Created on: Jun 14, 2021
 *      Author: jacob
 */

#ifndef BAnd_H
#define BAnd_H

#include "ast/expression/binary_operation/Binary.h"
#include "common/NumWrap.h"

/**
 * The bitwise and class is used to perform bitwise and operation
 * @author Jacob Bauer
 */
class BAnd: public Binary<Integer>{
public:
	/**
	 * The interpret method computes the bitwise operation of two numbers
	 * @param None
	 * @return an Integer object
	 */
	Integer interpret();

	/**
	 * The code gen method emits the LLVM code to be used to generate a bitwise and expression
	 */
	void code_gen();
};

#endif
