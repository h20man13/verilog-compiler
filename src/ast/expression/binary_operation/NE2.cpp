/*
 * BOr.cpp
 *
 *  Created on: Jun 16, 2021
 *      Author: jacob
 */

#include "ast/expression/binary_operation/NE2.h"
#include "ast/expression/binary_operation/Binary.h"
#include "ast/expression/Expression.h"
#include "common/TypeOpUtils.h"

NE2::NE2(const Position& position, Expression* const left, Expression* const right): AstNode(position), Binary(position, left, right){}

NE2::NE2(const NE2& binary): AstNode(binary), Binary(binary){}

void NE2::code_gen() const {
	// TODO -- finish this later
}

Object* const NE2::evaluate() {
	Object *const left = this->left->evaluate();
	Object *const right = this->right->evaluate();

	return bor(left, right);
}


