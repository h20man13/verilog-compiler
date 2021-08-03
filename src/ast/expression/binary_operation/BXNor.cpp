/*
 * BOr.cpp
 *
 *  Created on: Jun 16, 2021
 *      Author: jacob
 */

#include "ast/expression/binary_operation/BXNor.h"
#include "ast/expression/binary_operation/Binary.h"
#include "ast/expression/Expression.h"
#include "common/types/TypeOpUtils.h"

BXNor::BXNor(const Position& position, Expression* const left, Expression* const right): AstNode(position), Binary(position, left, right){}

BXNor::BXNor(const BXNor& binary): AstNode(binary), Binary(binary){}

void BXNor::code_gen() const {
	// TODO -- finish this later
}

ObjBase* const BXNor::evaluate() {
	ObjBase *const left = this->left->evaluate();
	ObjBase *const right = this->right->evaluate();

	return bxnor(left, right);
}


