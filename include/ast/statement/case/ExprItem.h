/*
 * CaseItem.h
 *
 *  Created on: Jul 15, 2021
 *      Author: jacob
 */

#ifndef EXPR_ITEM_H
#define EXPR_ITEM_H

#include "ast/expression/Expression.h"
#include "ast/statement/Statement.h"
#include "ast/statement/case/CaseItem.h"
#include <list>

class ExprItem: public CaseItem{
private:
	std::list<Expression* const> exp_list;
public:
	ExprItem(std::list<Expression* const> exp_list, Statement* const statement);
	ExprItem(const ExprItem& item);
	~ExprItem();
	const bool matchX();
	const bool matchZ();
	const bool match();

};



#endif /* INCLUDE_AST_STATEMENT_CASE_CASEITEM_H_ */
