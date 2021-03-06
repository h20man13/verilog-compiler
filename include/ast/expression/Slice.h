/*
 * Concatenation.h
 *
 *  Created on: Jun 29, 2021
 *      Author: jacob
 */

#ifndef SLICE_H
#define SLICE_H

#include "ast/expression/Expression.h"
#include "ast/expression/LValue.h"
#include "ast/mod_item/declaration/RegValue.h"
#include <list>

class Slice: public Expression, public LValue, public RegValue{
private:
	std::string lexeme;
	Expression* const begin;
	Expression* const end;
public:

	/**
	 * The slice ast node constructor is used to construct a slice ast nodes in Verilog given three parameters
	 * @param position  the position in the stream of the slice (should be equal to the position of the Identifier)
	 * @param lexeme  the identifier of the lexeme to be passed in
	 * @param begin  the beginning of the slice
	 * @param end  the end of the slice
	 */
	Slice(const Position& position, const std::string& lexeme, Expression* const begin, Expression* const end, SymbolTable* const table);

	/**
	 * The slice copy constructor creates a slice copy from another slice expression ast node
	 * @param slice  the slice that will be copied
	 */
	Slice(const Slice& slice);

	/**
	 * The code gen method is used to generate code that can be used for generating code
	 */

	void code_gen() const;

	/**
	 * The evaluate method can be used for interpreting expressions
	 * @return
	 */
	Object* const evaluate();

	~Slice();

	/**
	 * The evaluate method is used access a range of elements
	 */
	Object* const access() const;

	void declare() const;

	SymbolTable::attribute get_attribute_type() const;

	const std::string get_symbol_name() const;

};



#endif
