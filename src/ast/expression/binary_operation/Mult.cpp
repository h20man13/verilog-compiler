/*
 * Mult.cpp
 *
 *  Created on: Jun 16, 2021
 *      Author: jacob
 */

#include "ast/expression/binary_operation/Mult.h"
#include "ast/expression/binary_operation/Binary.h"
#include "ast/expression/Expression.h"
#include "common/types/TypeOpUtils.h"

void Mult::code_gen() const {
	// TODO -- finish this later
}

ObjBase* const Mult::evaluate() const {
	ObjBase *const left = this->left->evaluate();
	ObjBase *const right = this->right->evaluate();

	return mult(left, right);
}

