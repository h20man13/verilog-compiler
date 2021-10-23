/*
 * Number.h
 *
 *  Created on: Jun 30, 2021
 *      Author: jacob
 */

#ifndef IDENTIFIER_H
#define IDENTIFIER_H

#include "ast/expression/Expression.h"
#include "ast/expression/LValue.h"
#include "ast/mod_item/declaration/RegValue.h"
#include "Token.h"

/**
 * The identifier class is used to for Identifier AST nodes
 * @author Jacob Bauer
 */
class Identifier: public Expression, public LValue, public RegValue{
private:
	const std::string lexeme; //stores variable name
public:
	/**
	 * The identifier constructor takes in a ident token and converts it to an identifier ast node
	 * @param tok  the token that represents the identifier
	 */
	Identifier(const Token& tok, SymbolTable* const table);

	/**
	 * The identifier copy constructor is used to copy an identifier expression
	 * @param ident  a reference to the identifier to be coppied
	 */
	Identifier(const Identifier& ident);

	/**
	 * The code gen method is used to generate the LLVM IR for Identifier objects
	 */
	void code_gen() const;

	/**
	 * The evaluate method is used to interpret identifiers
	 * @return  an object representing the result from the evaluation
	 */

	Object* const evaluate();

	/**
	 * The access operator is used to access the element that will need to be assigned to
	 */

	Object* const access() const;

	void declare() const;

	SymbolTable::attribute get_attribute_type() const;

	const std::string get_symbol_name() const;
};



#endif /* INCLUDE_AST_EXPRESSION_NUMBER_H_ */
