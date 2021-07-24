/*
 * Div.cpp
 *
 *  Created on: Jun 16, 2021
 *      Author: jacob
 */

#include "ast/expression/binary_operation/Div.h"
#include "ast/expression/binary_operation/Binary.h"
#include "ast/expression/Expression.h"
#include "common/types/TypeOpUtils.h"

Div::Div(const Position& position, Expression* const left, Expression* const right): Binary(position, left, right){}

Div::Div(const Div& binary): Binary(binary){}

void Div::code_gen() const {
	// TODO -- finish this later
}

ObjBase* const Div::evaluate() {
	ObjBase *const left = this->left->evaluate();
	ObjBase *const right = this->right->evaluate();

	return div(left, right);
}

