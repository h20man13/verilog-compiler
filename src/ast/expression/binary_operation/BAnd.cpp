/*
 * BAnd.cpp
 *
 *  Created on: Jun 16, 2021
 *      Author: jacob
 */

#include "ast/expression/binary_operation/BAnd.h"
#include "ast/expression/binary_operation/Binary.h"
#include "ast/expression/Expression.h"
#include "common/NumWrap.h"

void BAnd::code_gen() const {
	// TODO -- finish this later
}

Number BAnd::evaluate() const {
	return Number(left.evaluate() & right.evaluate());
}


