/*
 * Binary.cpp
 *
 *  Created on: Jun 16, 2021
 *      Author: jacob
 */

#include "ast/expression/Expression.h"
#include "ast/expression/unary_operation/Unary.h"
#include "common/types/Number.h"

Unary::Unary(const Position& position, const Expression& exp) : Expression(position), exp(&exp){}

Unary::Unary(const Unary& binop): Expression(binop.get_position()), exp(binop.exp){}

Unary::~Unary(){
	delete exp;
}