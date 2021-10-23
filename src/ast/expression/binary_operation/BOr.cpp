/*
 * BOr.cpp
 *
 *  Created on: Jun 16, 2021
 *      Author: jacob
 */

#include "ast/expression/binary_operation/BOr.h"
#include "ast/expression/binary_operation/Binary.h"
#include "ast/expression/Expression.h"
#include "common/TypeOpUtils.h"

BOr::BOr(const Position& position, Expression* const left, Expression* const right): AstNode(position), Binary(position, left, right){}

BOr::BOr(const BOr& binary): AstNode(binary), Binary(binary){}

void BOr::code_gen() const {
	// TODO -- finish this later
}

Object* const BOr::evaluate() {
	Object *const left = this->left->evaluate();
	Object *const right = this->right->evaluate();

	Object* result = bor(left, right);

	delete left;
	delete right;

	return result;
}


