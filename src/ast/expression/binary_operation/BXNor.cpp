/*
 * BOr.cpp
 *
 *  Created on: Jun 16, 2021
 *      Author: jacob
 */

#include "ast/expression/binary_operation/BXNor.h"
#include "ast/expression/binary_operation/Binary.h"
#include "ast/expression/Expression.h"
#include "common/TypeOpUtils.h"

BXNor::BXNor(const Position& position, Expression* const left, Expression* const right): AstNode(position), Binary(position, left, right){}

BXNor::BXNor(const BXNor& binary): AstNode(binary), Binary(binary){}

void BXNor::code_gen() const {
	// TODO -- finish this later
}

Object* const BXNor::evaluate() {
	Object *const left = this->left->evaluate();
	Object *const right = this->right->evaluate();

	Object* result = bxnor(left, right);

	delete left;
	delete right;

	return result;
}


