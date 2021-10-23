/*
 * BAnd.cpp
 *
 *  Created on: Jun 16, 2021
 *      Author: jacob
 */

#include "ast/expression/binary_operation/BAnd.h"
#include "OO-Types/include/Object.h"
#include "ast/expression/binary_operation/Binary.h"
#include "ast/expression/Expression.h"
#include "common/TypeOpUtils.h"

BAnd::BAnd(const Position& position, Expression* const left, Expression* const right): AstNode(position), Binary(position, left, right){}

BAnd::BAnd(const BAnd& binary): AstNode(binary), Binary(binary){}

void BAnd::code_gen() const {
	// TODO -- finish this later
}

Object* const BAnd::evaluate() {

	Object *const left = this->left->evaluate();
	Object *const right = this->right->evaluate();

	Object* result = band(left, right);

	delete left;
	delete right;

	return result;
}


