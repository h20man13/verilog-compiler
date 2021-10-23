/*
 * BOr.cpp
 *
 *  Created on: Jun 16, 2021
 *      Author: jacob
 */

#include "ast/expression/binary_operation/NE1.h"
#include "ast/expression/binary_operation/Binary.h"
#include "ast/expression/Expression.h"
#include "common/TypeOpUtils.h"

NE1::NE1(const Position& position, Expression* const left, Expression* const right): AstNode(position), Binary(position, left, right){}

NE1::NE1(const NE1& binary): AstNode(binary), Binary(binary){}

void NE1::code_gen() const {
	// TODO -- finish this later
}

Object* const NE1::evaluate() {
	Object *const left = this->left->evaluate();
	Object *const right = this->right->evaluate();

	return NULL;
}


