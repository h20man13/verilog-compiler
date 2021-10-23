/*
 * Sub.h
 *
 *  Created on: Jun 14, 2021
 *      Author: jacob
 */

#ifndef SUB_H
#define SUB_H

#include "ast/expression/binary_operation/Binary.h"
#include "OO-Types/include/Number.h"

/**
 * The subtract class is used for subtract operations.
 * (Ex: a - b where a and b are NumWraps)
 * @author Jacob Bauer
 */
class Sub: public Binary{
public:
	Sub(const Position& position, Expression* const left, Expression* const right);
	Sub(const Sub& binary);
	/**
	 * A function to perform interpretation on the subtraction operation
	 * @return an integer that is the result of the binary operation
	 */
	Object* const evaluate();

	/**
	 * The code_gen function is used to generate the code for the subtraction expression via syntax directed translation
	 * @return None
	 */
	void code_gen() const;
};

#endif
