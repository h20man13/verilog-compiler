/*
 * BOr.cpp
 *
 *  Created on: Jun 16, 2021
 *      Author: jacob
 */

#include "ast/expression/binary_operation/LE.h"
#include "ast/expression/binary_operation/Binary.h"
#include "ast/expression/Expression.h"
#include "common/types/TypeOpUtils.h"

LE::LE(const Position& position, Expression* const left, Expression* const right): Binary(position, left, right){}

LE::LE(const LE& binary): Binary(binary){}

void LE::code_gen() const {
	// TODO -- finish this later
}

ObjBase* const LE::evaluate() {
	ObjBase *const left = this->left->evaluate();
	ObjBase *const right = this->right->evaluate();

	return bor(left, right);
}


