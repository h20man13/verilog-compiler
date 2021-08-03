/*
 * BOr.cpp
 *
 *  Created on: Jun 16, 2021
 *      Author: jacob
 */

#include "ast/expression/binary_operation/NE1.h"
#include "ast/expression/binary_operation/Binary.h"
#include "ast/expression/Expression.h"
#include "common/types/TypeOpUtils.h"

NE1::NE1(const Position& position, Expression* const left, Expression* const right): AstNode(position), Binary(position, left, right){}

NE1::NE1(const NE1& binary): AstNode(binary), Binary(binary){}

void NE1::code_gen() const {
	// TODO -- finish this later
}

ObjBase* const NE1::evaluate() {
	ObjBase *const left = this->left->evaluate();
	ObjBase *const right = this->right->evaluate();

	return bor(left, right);
}


