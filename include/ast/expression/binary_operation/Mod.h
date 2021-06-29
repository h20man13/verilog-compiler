/*
 * Mod.h
 *
 *  Created on: Jun 14, 2021
 *      Author: jacob
 */

#ifndef MOD_H
#define MOD_H

#include "ast/expression/binary_operation/Binary.h"
#include "common/NumWrap.h"

/**
 * The subtract class is used for modulo operations.
 * (Ex: a % b where a and b are NumWraps)
 * @author Jacob Bauer
 */
class Mod: public Binary{
public:
	/**
	 * A function to perform interpretation on the modulo expression
	 * @return an integer that is the result of the binary operation
	 */
	ObjBase* const evaluate() const;

	/**
	 * The code_gen function is used to generate the code for the modulo expression via syntax directed translation
	 * @return None
	 */
	void code_gen() const;
};

#endif /* INCLUDE_AST_EXPRESSION_BINARY_OPERATION_MODULO_H_ */
