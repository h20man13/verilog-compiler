/*
 * LOr.cpp
 *
 *  Created on: Jun 16, 2021
 *      Author: jacob
 */

#include "ast/expression/binary_operation/LOr.h"
#include "ast/expression/binary_operation/Binary.h"
#include "ast/expression/Expression.h"
#include "common/TypeOpUtils.h"

LOr::LOr(const Position& position, Expression* const left, Expression* const right): AstNode(position), Binary(position, left, right){}

LOr::LOr(const LOr& binary): AstNode(binary), Binary(binary){}

void LOr::code_gen() const {
	// TODO -- finish this later
}

Object* const LOr::evaluate() {
	Object *const left = this->left->evaluate();
	Object *const right = this->right->evaluate();

	Object* result = lor(left, right);

	delete left;
	delete right;

	return result;
}


