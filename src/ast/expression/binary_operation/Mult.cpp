/*
 * Mult.cpp
 *
 *  Created on: Jun 16, 2021
 *      Author: jacob
 */

#include "ast/expression/binary_operation/Mult.h"
#include "ast/expression/binary_operation/Binary.h"
#include "ast/expression/Expression.h"
#include "common/NumWrap.h"

void Mult::code_gen() const {
	// TODO -- finish this later
}

Number Mult::evaluate() const {
	return Number(left.evaluate() * right.evaluate())= 0;
}


