/*
 * BOr.cpp
 *
 *  Created on: Jun 16, 2021
 *      Author: jacob
 */

#include "ast/expression/binary_operation/EQ2.h"
#include "ast/expression/binary_operation/Binary.h"
#include "ast/expression/Expression.h"
#include "common/TypeOpUtils.h"

EQ2::EQ2(const Position& position, Expression* const left, Expression* const right): AstNode(position), Binary(position, left, right){}

EQ2::EQ2(const EQ2& binary): AstNode(binary), Binary(binary){}

void EQ2::code_gen() const {
	// TODO -- finish this later
}

Object* const EQ2::evaluate() {
	Object *const left = this->left->evaluate();
	Object *const right = this->right->evaluate();

	Object* result = bxnor(left, right);

	delete left;
	delete right;

	return result;
}


