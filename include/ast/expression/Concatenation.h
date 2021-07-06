/*
 * Concatenation.h
 *
 *  Created on: Jun 29, 2021
 *      Author: jacob
 */

#ifndef CONCATENATION_H
#define CONCATENATION_H

#include "ast/expression/Expression.h"
#include <list>
#include <memory>

/**
 * The concatenation ast node class is used to simulate concatenation nodes in verilog
 * (Ex: {x, y, z} where z y and z are wires or registers
 * @author Jacob Bauer
 */
class Concatenation: Expression{
private:
	std::list<Expression* const> concat_list; //list of expressions to be concatenated
public:

	/**
	 * The default concatenation constructor it takes a position as well as a list of expressions that will be concatenated
	 * @param position  the position of the start of the concatenation expression or the {
	 * @param concat_list  the list of expressions that reside inside the concatenation
	 */

	Concatenation(const Position& position, const std::list<Expression* const> concat_list);

	/**
	 * The concatenation copy constructor
	 * @param concatenation  the concatenation to be copied
	 */

	Concatenation(const Concatenation& concatenation);

	/**
	 * The code generation function that will be used to emit the llvm IR
	 */
	void code_gen() const;

	/**
	 * The evaluate function will interpret the concatenation and will output the corresponding vector
	 * @return an Object value
	 */
	ObjBase* const evaluate();

	/**
	 * The destructor of the Concatenation class it will delete all of the corresponding expressions in the list
	 */
	~Concatenation();

};



#endif
