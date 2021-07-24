/*
 * BOr.cpp
 *
 *  Created on: Jun 16, 2021
 *      Author: jacob
 */

#include "ast/expression/binary_operation/BXor.h"
#include "ast/expression/binary_operation/Binary.h"
#include "ast/expression/Expression.h"
#include "common/types/TypeOpUtils.h"


BXor::BXor(const Position& position, Expression* const left, Expression* const right): Binary(position, left, right){}

BXor::BXor(const BXor& binary): Binary(binary){}

void BXor::code_gen() const {
	// TODO -- finish this later
}

ObjBase* const BXor::evaluate() {
	ObjBase *const left = this->left->evaluate();
	ObjBase *const right = this->right->evaluate();

	return bxor(left, right);
}

