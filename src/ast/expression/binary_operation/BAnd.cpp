/*
 * BAnd.cpp
 *
 *  Created on: Jun 16, 2021
 *      Author: jacob
 */

#include "ast/expression/binary_operation/BAnd.h"
#include "common/types/ObjBase.h"
#include "ast/expression/binary_operation/Binary.h"
#include "ast/expression/Expression.h"
#include "common/types/TypeOpUtils.h"

void BAnd::code_gen() const {
	// TODO -- finish this later
}

ObjBase* const BAnd::evaluate() const {

	ObjBase *const left = this->left->evaluate();
	ObjBase *const right = this->right->evaluate();

	return band(left, right);
}


