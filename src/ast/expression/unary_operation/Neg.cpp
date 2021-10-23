/*
 * LAnd.h
 *
 *  Created on: Jun 14, 2021
 *      Author: jacob
 */
#include "ast/expression/unary_operation/Neg.h"

Neg::Neg(const Position& start, Expression* const exp): AstNode(start), Unary(start, exp){};

Object* const Neg::evaluate(){
	return NULL;
}

/**
 * The code generation function that is used to emit LLVM IR
 */
void Neg::code_gen() const {

}

