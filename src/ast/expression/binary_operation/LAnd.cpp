/*
 * LAnd.cpp
 *
 *  Created on: Jun 16, 2021
 *      Author: jacob
 */

#include "ast/expression/binary_operation/LAnd.h"
#include "ast/expression/binary_operation/Binary.h"
#include "ast/expression/Expression.h"
#include "common/NumWrap.h"

/**
 * The gode_gen method is used to emit LLVM code
 */
void LAnd::code_gen() const {
	// TODO -- finish this later
}

/**
 * The evaluate method is used to evaluate
 * @return
 */
Number LAnd::evaluate() const {
	return Number(left.evaluate() && right.evaluate());
}


