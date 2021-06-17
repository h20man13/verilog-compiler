/*
 * BOr.cpp
 *
 *  Created on: Jun 16, 2021
 *      Author: jacob
 */

#include "ast/expression/binary_operation/BXor.h"
#include "ast/expression/binary_operation/Binary.h"
#include "ast/expression/Expression.h"
#include "common/NumWrap.h"

void BXor::code_gen() const {
	// TODO -- finish this later
}

Number BXor::evaluate() const {
	return Number(left.evaluate() ^ right.evaluate());
}


