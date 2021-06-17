/*
 * Add.cpp
 *
 *  Created on: Jun 16, 2021
 *      Author: jacob
 */

#include "ast/expression/binary_operation/Add.h"
#include "ast/expression/binary_operation/Binary.h"
#include "ast/expression/Expression.h"
#include "common/NumWrap.h"

/**
 * Emits LLVM IR for an addition expression
 */
void Add::code_gen() const {
	// TODO -- finish this later
}

Number Add::evaluate() const {
	return Number(left.evaluate() + right.evaluate());
}


