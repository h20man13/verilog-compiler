/*
 * BOr.cpp
 *
 *  Created on: Jun 16, 2021
 *      Author: jacob
 */

#include "ast/expression/binary_operation/LE.h"
#include "ast/expression/binary_operation/Binary.h"
#include "ast/expression/Expression.h"
#include "common/TypeOpUtils.h"

LE::LE(const Position& position, Expression* const left, Expression* const right): AstNode(position), Binary(position, left, right){}

LE::LE(const LE& binary): AstNode(binary), Binary(binary){}

void LE::code_gen() const {
	// TODO -- finish this later
}

Object* const LE::evaluate() {
	Object *const left = this->left->evaluate();
	Object *const right = this->right->evaluate();

	return bor(left, right);
}


