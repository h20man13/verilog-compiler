/*
 * ReturnStatement.h
 *
 *  Created on: Jul 21, 2021
 *      Author: jacob
 */

#ifndef RETURN_STATEMENT_H
#define RETURN_STATEMENT_H

#include "ast/statement/Statement.h"
#include "ast/expression/LValue.h"
#include "ast/expression/Expression.h"

class ReturnStatement: Statement{
private:
	LValue* const ident;
	Expression* const expression;
public:
	ReturnStatement(const Position& position, LValue* const ident, Expression* const expression);
	ReturnStatement(const ReturnStatement& statement);

	void code_gen() const;
	void execute() const;
};



#endif
