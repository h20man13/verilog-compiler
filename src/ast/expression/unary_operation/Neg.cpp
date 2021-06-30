/*
 * LAnd.h
 *
 *  Created on: Jun 14, 2021
 *      Author: jacob
 */

#include "ast/expression/unary_operation/Unary.h"
#include "ast/expression/unary_operation/Neg.h"
#include "common/types/TypeOpUtils.h"

ObjBase* const Neg::evaluate() const {
	return neg(this->exp->evaluate());
}

/**
 * The code generation function that is used to emit LLVM IR
 */
void Neg::code_gen() const {

}

