/*
 * Concatenation.h
 *
 *  Created on: Jun 29, 2021
 *      Author: jacob
 */

#ifndef INDEX_H
#define INDEX_H

#include "ast/expression/Expression.h"
#include "ast/expression/LValue.h"
#include "ast/mod_item/declaration/RegValue.h"
#include <list>

/**
 * The index class is used so simulate something similar to indexing an array. it contains an identifier that is followed by an expression
 * (Ex: i[4] -- fetches the 4th element in data structure i)
 */
class Index: Expression, LValue, RegValue{
private:
	const std::string lexeme; //the identifier belonging to the index
	Expression* const index; //the index of the expression
public:

	/**
	 * The index constructor generates an index given three parameters
	 * @param position  the position in the stream of the object
	 * @param lexeme  the identifier that needs to be resolved in a symbol table
	 * @param index  the index of the element that comes in the form of an expression
	 */

	Index(const Position& position, const std::string& lexeme, Expression* const index);

	/**
	 * The Index copy constructor copies an Index ast node into the owning object
	 * @param index  the index ast node to be coppied
	 */

	Index(const Index& index);

	/**
	 * The code generation function generates emits the LLVM IR function for indexing
	 */

	void code_gen() const;

	/**
	 * The evaluate function evaluates the indexing expression
	 * @return  an object value from the index
	 */

	ObjBase* const evaluate();

	/**
	 * The destructor is used to destroy index expressions
	 */

	~Index();

	ObjBase* const access() const;

	void declare() const;

};



#endif
