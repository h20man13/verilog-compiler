/*
 * BOr.cpp
 *
 *  Created on: Jun 16, 2021
 *      Author: jacob
 */

#include "ast/expression/binary_operation/BXor.h"
#include "ast/expression/binary_operation/Binary.h"
#include "ast/expression/Expression.h"
#include "common/TypeOpUtils.h"


BXor::BXor(const Position& position, Expression* const left, Expression* const right): AstNode(position), Binary(position, left, right){}

BXor::BXor(const BXor& binary): AstNode(binary), Binary(binary){}

void BXor::code_gen() const {
	// TODO -- finish this later
}

Object* const BXor::evaluate() {
	Object *const left = this->left->evaluate();
	Object *const right = this->right->evaluate();

	Object* result = bxor(left, right);

	delete left;
	delete right;

	return result;
}

