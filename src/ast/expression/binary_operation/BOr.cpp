/*
 * BOr.cpp
 *
 *  Created on: Jun 16, 2021
 *      Author: jacob
 */

#include "ast/expression/binary_operation/BOr.h"
#include "ast/expression/binary_operation/Binary.h"
#include "ast/expression/Expression.h"
#include "common/types/TypeOpUtils.h"

BOr::BOr(const Position& position, Expression* const left, Expression* const right): Binary(position, left, right){}

BOr::BOr(const BOr& binary): Binary(binary){}

void BOr::code_gen() const {
	// TODO -- finish this later
}

ObjBase* const BOr::evaluate() {
	ObjBase *const left = this->left->evaluate();
	ObjBase *const right = this->right->evaluate();

	return bor(left, right);
}


