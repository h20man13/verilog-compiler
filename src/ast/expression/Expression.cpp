/*
 * Expression.cpp
 *
 *  Created on: Jun 14, 2021
 *      Author: jacob
 */

#include "ast/expression/Expression.h"
#include "common/Position.h"

/**
 * The Expression constructor is only used to set the position of Expression sub objects
 * @param position  the position of the expression within the ast
 */
virtual Expression::Expression(const Position& position) : position(position){}

const Position Expression::get_position() const {
	return position;
}


