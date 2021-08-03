/*
 * Add.cpp
 *
 *  Created on: Jun 16, 2021
 *      Author: jacob
 */

#include "ast/expression/binary_operation/Add.h"
#include "common/types/ObjBase.h"
#include "ast/expression/binary_operation/Binary.h"
#include "ast/expression/Expression.h"
#include "common/types/TypeOpUtils.h"

Add::Add(const Position& position, Expression* const left, Expression* const right): AstNode(position), Binary(position, left, right){}

Add::Add(const Add& binary): AstNode(binary), Binary(binary){}
/**
 * Emits LLVM IR for an addition expression
 */
void Add::code_gen() const {
	// TODO -- finish this later
}

ObjBase* const Add::evaluate(){
	ObjBase *const left = this->left->evaluate();
	ObjBase *const right = this->right->evaluate();

	ObjBase* const result = add(left, right);

	delete left;
	delete right;

	return result;
}

