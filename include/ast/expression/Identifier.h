/*
 * Number.h
 *
 *  Created on: Jun 30, 2021
 *      Author: jacob
 */

#ifndef IDENTIFIER_H
#define IDENTIFIER_H

#include "ast/expression/Expression.h"
#include "Token.h"

class Identifier: Expression{
private:
	Token tok;
public:
	Identifier(Token& tok);

	void code_gen() const;

	ObjBase* const evaluate();
};



#endif /* INCLUDE_AST_EXPRESSION_NUMBER_H_ */
