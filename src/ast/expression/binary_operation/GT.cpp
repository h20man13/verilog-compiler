/*
 * BOr.cpp
 *
 *  Created on: Jun 16, 2021
 *      Author: jacob
 */

#include "ast/expression/binary_operation/GT.h"
#include "ast/expression/binary_operation/Binary.h"
#include "ast/expression/Expression.h"
#include "common/types/TypeOpUtils.h"

GT::GT(const Position& position, Expression* const left, Expression* const right): AstNode(position), Binary(position, left, right){}

GT::GT(const GT& binary): AstNode(binary), Binary(binary){}

void GT::code_gen() const {
	// TODO -- finish this later
}

ObjBase* const GT::evaluate() {
	ObjBase *const left = this->left->evaluate();
	ObjBase *const right = this->right->evaluate();

	return bor(left, right);
}


