/*
 * LAnd.h
 *
 *  Created on: Jun 14, 2021
 *      Author: jacob
 */

#include "ast/expression/unary_operation/Unary.h"
#include "ast/expression/unary_operation/LNeg.h"
#include "common/types/TypeOpUtils.h"

LNeg::LNeg(const Position& start, Expression* const exp): Unary(start, exp){};

ObjBase* const LNeg::evaluate(){
	return lneg(this->exp->evaluate());
}

/**
 * The code generation function that is used to emit LLVM IR
 */
void LNeg::code_gen() const {

}

