/*
 * Div.cpp
 *
 *  Created on: Jun 16, 2021
 *      Author: jacob
 */

#include "ast/expression/binary_operation/Div.h"
#include "ast/expression/binary_operation/Binary.h"
#include "ast/expression/Expression.h"
#include "common/TypeOpUtils.h"

Div::Div(const Position& position, Expression* const left, Expression* const right): AstNode(position), Binary(position, left, right){}

Div::Div(const Div& binary): AstNode(binary), Binary(binary){}

void Div::code_gen() const {
	// TODO -- finish this later
}

Object* const Div::evaluate() {
	Object *const left = this->left->evaluate();
	Object *const right = this->right->evaluate();

	Object* result = div(left, right);

	delete left;
	delete right;

	return result;
}

