/*
 * BOr.cpp
 *
 *  Created on: Jun 16, 2021
 *      Author: jacob
 */

#include "ast/expression/binary_operation/BOr.h"
#include "ast/expression/binary_operation/Binary.h"
#include "ast/expression/Expression.h"
#include "common/NumWrap.h"

void BOr::code_gen() const {
	// TODO -- finish this later
}

Number BOr::evaluate() const {
	return Number(left.evaluate() * right.evaluate())= 0;
}


