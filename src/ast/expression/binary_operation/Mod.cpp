/*
 * BAnd.cpp
 *
 *  Created on: Jun 16, 2021
 *      Author: jacob
 */

#include "ast/expression/binary_operation/Mod.h"
#include "OO-Types/include/Object.h"
#include "ast/expression/binary_operation/Binary.h"
#include "ast/expression/Expression.h"
#include "common/TypeOpUtils.h"

Mod::Mod(const Position& position, Expression* const left, Expression* const right): AstNode(position), Binary(position, left, right){}

Mod::Mod(const Mod& binary): AstNode(binary), Binary(binary){}

void Mod::code_gen() const {
	// TODO -- finish this later
}

Object* const Mod::evaluate() {

	Object *const left = this->left->evaluate();
	Object *const right = this->right->evaluate();

	Object* result = mod(left, right);

	delete left;
	delete right;

	return result;
}


