/*
 * BOr.cpp
 *
 *  Created on: Jun 16, 2021
 *      Author: jacob
 */

#include "ast/expression/binary_operation/GE.h"
#include "ast/expression/binary_operation/Binary.h"
#include "ast/expression/Expression.h"
#include "common/types/TypeOpUtils.h"

GE::GE(const Position& position, Expression* const left, Expression* const right): AstNode(position), Binary(position, left, right){}

GE::GE(const GE& binary): AstNode(binary), Binary(binary){}

void GE::code_gen() const {
	// TODO -- finish this later
}

ObjBase* const GE::evaluate() {
	ObjBase *const left = this->left->evaluate();
	ObjBase *const right = this->right->evaluate();

	return bor(left, right);
}


