/*
 * Sub.cpp
 *
 *  Created on: Jun 16, 2021
 *      Author: jacob
 */

#include "ast/expression/binary_operation/Sub.h"
#include "ast/expression/binary_operation/Binary.h"
#include "ast/expression/Expression.h"
#include "common/TypeOpUtils.h"

Sub::Sub(const Position& position, Expression* const left, Expression* const right): AstNode(position), Binary(position, left, right){}

Sub::Sub(const Sub& binary): AstNode(binary), Binary(binary){}

void Sub::code_gen() const {
	// TODO -- finish this later
}

Object* const Sub::evaluate(){
	Object *const left = this->left->evaluate();
	Object *const right = this->right->evaluate();

	return sub(left, right);
}

