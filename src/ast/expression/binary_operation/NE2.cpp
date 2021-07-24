/*
 * BOr.cpp
 *
 *  Created on: Jun 16, 2021
 *      Author: jacob
 */

#include "ast/expression/binary_operation/NE2.h"
#include "ast/expression/binary_operation/Binary.h"
#include "ast/expression/Expression.h"
#include "common/types/TypeOpUtils.h"

NE2::NE2(const Position& position, Expression* const left, Expression* const right): Binary(position, left, right){}

NE2::NE2(const NE2& binary): Binary(binary){}

void NE2::code_gen() const {
	// TODO -- finish this later
}

ObjBase* const NE2::evaluate() {
	ObjBase *const left = this->left->evaluate();
	ObjBase *const right = this->right->evaluate();

	return bor(left, right);
}


