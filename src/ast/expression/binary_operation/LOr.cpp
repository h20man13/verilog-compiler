/*
 * LOr.cpp
 *
 *  Created on: Jun 16, 2021
 *      Author: jacob
 */

#include "ast/expression/binary_operation/LOr.h"
#include "ast/expression/binary_operation/Binary.h"
#include "ast/expression/Expression.h"
#include "common/types/TypeOpUtils.h"

LOr::LOr(const Position& position, Expression* const left, Expression* const right): AstNode(position), Binary(position, left, right){}

LOr::LOr(const LOr& binary): AstNode(binary), Binary(binary){}

void LOr::code_gen() const {
	// TODO -- finish this later
}

ObjBase* const LOr::evaluate() {
	return lor(this->left->evaluate(),  this->right->evaluate());
}


