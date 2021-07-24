/*
 * Binary.cpp
 *
 *  Created on: Jun 16, 2021
 *      Author: jacob
 */

#include "ast/expression/Expression.h"
#include "ast/expression/binary_operation/Binary.h"
#include "common/types/Number.h"

Binary::Binary(const Position& position, Expression* const left, Expression* const right) : Expression(position), left(left), right(right){}

Binary::Binary(const Binary& binop): Expression(binop.get_position()), left(binop.left), right(binop.right){}

Binary::~Binary(){
	delete left;
	delete right;
}
