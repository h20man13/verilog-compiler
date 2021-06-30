/*
 * LAnd.h
 *
 *  Created on: Jun 14, 2021
 *      Author: jacob
 */

#include "ast/expression/unary_operation/Unary.h"
#include "ast/expression/unary_operation/LNeg.h"
#include "common/types/TypeOpUtils.h"

ObjBase* const LNeg::evaluate() const {
	return lneg(this->exp->evaluate());
}

/**
 * The code generation function that is used to emit LLVM IR
 */
void LNeg::code_gen() const {

}

