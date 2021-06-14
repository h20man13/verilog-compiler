/*
 * Modulo.h
 *
 *  Created on: Jun 14, 2021
 *      Author: jacob
 */

#ifndef SUB_H
#define SUB_H

#include "ast/expression/binary_operation/Binary.h"
#include "common/NumWrap.h"

/**
 * The subtract class is used for subtract operations.
 * (Ex: a - b where a and b are NumWraps)
 * @author Jacob Bauer
 */
template<typename num_type>
class Sub: public Binary<Number>{
public:
	/**
	 * A function to perform interpretation on the subtraction operation
	 * @return an integer that is the result of the binary operation
	 */
	Number interpret();

	/**
	 * The code gen function is used to generate the code for the subtraction expression via syntax directed translation
	 * @return None
	 */
	void code_gen();
};

#endif
