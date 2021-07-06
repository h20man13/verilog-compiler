/*
 * Number.h
 *
 *  Created on: Jun 30, 2021
 *      Author: jacob
 */

#ifndef NUMBER_H
#define NUMBER_H

#include "ast/expression/Expression.h"
#include "Token.h"

class Number: Expression{
private:
	std::string lexeme;
public:
	Number(const Token& tok);

	void code_gen() const;

	ObjBase* const evaluate();
};



#endif /* INCLUDE_AST_EXPRESSION_NUMBER_H_ */
