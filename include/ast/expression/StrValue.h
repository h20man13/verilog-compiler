/*
 * Number.h
 *
 *  Created on: Jun 30, 2021
 *      Author: jacob
 */

#ifndef STRING_H
#define STRING_H

#include "ast/expression/Expression.h"
#include "Token.h"

/**
 * The string ast node class is used to store string objects
 * @author Jacob Bauer
 */
class StrValue: Expression{
private:
	const std::string lexeme; //the lexeme of the required string to store
public:
	/**
	 * The String class is used to store a string object
	 * @param tok  the token that represents the string
	 */
	StrValue(const Token& tok);

	/**
	 * the copy constructor to create string ast nodes
	 * @param str  the string object that will be coppied
	 */
	StrValue(const StrValue& str);

	/**
	 * The code gen method is used to emit a string in llvm IR
	 */
	void code_gen() const;

	/**
	 * The evaluate method is used to interpret a string ast node object
	 * @return
	 */
	ObjBase* const evaluate();
};



#endif /* INCLUDE_AST_EXPRESSION_NUMBER_H_ */
