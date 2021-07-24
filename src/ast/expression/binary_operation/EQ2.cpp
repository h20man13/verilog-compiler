/*
 * BOr.cpp
 *
 *  Created on: Jun 16, 2021
 *      Author: jacob
 */

#include "ast/expression/binary_operation/EQ2.h"
#include "ast/expression/binary_operation/Binary.h"
#include "ast/expression/Expression.h"
#include "common/types/TypeOpUtils.h"

EQ2::EQ2(const Position& position, Expression* const left, Expression* const right): Binary(position, left, right){}

EQ2::EQ2(const EQ2& binary): Binary(binary){}

void EQ2::code_gen() const {
	// TODO -- finish this later
}

ObjBase* const EQ2::evaluate() {
	ObjBase *const left = this->left->evaluate();
	ObjBase *const right = this->right->evaluate();

	return bor(left, right);
}


