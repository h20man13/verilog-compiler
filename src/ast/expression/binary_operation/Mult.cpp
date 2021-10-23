/*
 * Mult.cpp
 *
 *  Created on: Jun 16, 2021
 *      Author: jacob
 */

#include "ast/expression/binary_operation/Mult.h"
#include "ast/expression/binary_operation/Binary.h"
#include "ast/expression/Expression.h"
#include "common/TypeOpUtils.h"

Mult::Mult(const Position& position, Expression* const left, Expression* const right): AstNode(position), Binary(position, left, right){}

Mult::Mult(const Mult& binary): AstNode(binary), Binary(binary){}

void Mult::code_gen() const {
	// TODO -- finish this later
}

Object* const Mult::evaluate() {
	Object *const left = this->left->evaluate();
	Object *const right = this->right->evaluate();

	Object* result = mult(left, right);

	delete left;
	delete right;

	return result;
}

