/*
 * BOr.cpp
 *
 *  Created on: Jun 16, 2021
 *      Author: jacob
 */

#include "ast/expression/binary_operation/EQ3.h"
#include "ast/expression/binary_operation/Binary.h"
#include "ast/expression/Expression.h"
#include "common/types/TypeOpUtils.h"

EQ3::EQ3(const Position& position, Expression* const left, Expression* const right): AstNode(position), Binary(position, left, right){}

EQ3::EQ3(const EQ3& binary): AstNode(binary), Binary(binary){}

void EQ3::code_gen() const {
	// TODO -- finish this later
}

ObjBase* const EQ3::evaluate() {
	ObjBase *const left = this->left->evaluate();
	ObjBase *const right = this->right->evaluate();

	return bor(left, right);
}


