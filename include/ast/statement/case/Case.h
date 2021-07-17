/*
 * case.h
 *
 *  Created on: Jul 15, 2021
 *      Author: jacob
 */

#ifndef CASE_H
#define CASE_H

#include "ast/statement/Statement.h"
#include "ast/expression/Expression.h"
#include "ast/statement/case/CaseItem.h"
#include <list>

class Case: Statement{
protected:
	std::list<CaseItem* const> item_list;
	Expression* const expression;

	Case(const Position& position, Expression* const expression, std::list<CaseItem* const> &item_list);

	~Case();

	virtual void execute() const;

	virtual void code_gen() const;
};



#endif /* INCLUDE_AST_STATEMENT_CASE_CASE_H_ */
