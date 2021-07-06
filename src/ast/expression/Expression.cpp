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
 Expression::Expression(const Position& position) : position(position){}

/**
 * The  copy constructor is used to copy Expression objects regardless of implementation
 * @param expression The expression you want to copy from
 */
 Expression::Expression(const Expression& expression) : position(expression.get_position()){}

/**
 * The get position method is designed so the user can retrieve the position of the expression
 * @return a position object representing the expression
 */
const Position Expression::get_position() const {
	return position;
}

Expression::~Expression(){
	//TODO -- do nothing
}


