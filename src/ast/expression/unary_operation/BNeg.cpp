/*
 * LAnd.h
 *
 *  Created on: Jun 14, 2021
 *      Author: jacob
 */

#include "ast/expression/unary_operation/Unary.h"
#include "ast/expression/unary_operation/BNeg.h"
#include "common/types/TypeOpUtils.h"

BNeg::BNeg(const Position& start, Expression* const exp): Unary(start, exp){};

ObjBase* const BNeg::evaluate(){
	return bneg(this->exp->evaluate());
}

/**
 * The code generation function that is used to emit LLVM IR
 */
void BNeg::code_gen() const {

}

