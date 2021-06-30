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

class String: Expression{
private:
	Token tok;
public:
	String(Token& tok);

	void code_gen() const;

	ObjBase* const evaluate();
};



#endif /* INCLUDE_AST_EXPRESSION_NUMBER_H_ */
