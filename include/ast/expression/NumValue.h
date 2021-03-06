/*
 * Number.h
 *
 *  Created on: Jun 30, 2021
 *      Author: jacob
 */

#ifndef NUMVALUE_H
#define NUMVALUE_H

#include "ast/expression/Expression.h"
#include "Token.h"

class NumValue: public Expression{
private:
	std::string lexeme;
public:
	NumValue(const Token& tok);

	void code_gen() const;

	Object* const evaluate();
};



#endif /* INCLUDE_AST_EXPRESSION_NUMBER_H_ */
