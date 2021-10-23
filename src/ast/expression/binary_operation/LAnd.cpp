/*
 * LAnd.cpp
 *
 *  Created on: Jun 16, 2021
 *      Author: jacob
 */

#include "ast/expression/binary_operation/LAnd.h"
#include "ast/expression/binary_operation/Binary.h"
#include "ast/expression/Expression.h"
#include "common/TypeOpUtils.h"

LAnd::LAnd(const Position& position, Expression* const left, Expression* const right): AstNode(position), Binary(position, left, right){}

LAnd::LAnd(const LAnd& binary): AstNode(binary), Binary(binary){}

/**
 * The gode_gen method is used to emit LLVM code
 */
void LAnd::code_gen() const {
	// TODO -- finish this later
}

/**
 * The evaluate method is used to evaluate
 * @return
 */
Object* const LAnd::evaluate() {
	Object *const left = this->left->evaluate();
	Object *const right = this->right->evaluate();

	Object* result = land(left, right);

	delete left;
	delete right;

	return result;
}


