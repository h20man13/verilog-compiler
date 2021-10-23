/*
 * Unary.h
 *
 *  Created on: Jun 14, 2021
 *      Author: jacob
 */

#ifndef UNARY_H
#define UNARY_H

#include "ast/expression/Expression.h"
#include "OO-Types/include/Number.h"

/**
 * The unary super class defines unary operations
 */
class Unary: public Expression{
protected:
	Expression* const exp; //the expression to be performed on
	Unary(const Position& position, Expression* const exp); //default constructor
	Unary(const Unary& binop); //copy constructor
	virtual ~Unary(); //virtual destructor
public:

	/**
	 * The evaluate function computes the result of a Binary Expression
	 * @tparam num_type the return type of the expression
	 * @return a type
	 */
	 virtual Object* const evaluate() = 0;

	/**
	 * The code_gen method is used to generate the LLVM IR of an expression object
	 */
	 virtual void code_gen() const = 0;
};



#endif
