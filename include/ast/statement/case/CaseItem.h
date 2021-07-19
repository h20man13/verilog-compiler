/*
 * CaseItem.h
 *
 *  Created on: Jul 15, 2021
 *      Author: jacob
 */

#ifndef CASEITEM_H
#define CASEITEM_H

#include "ast/statement/Statement.h"
#include <list>

class CaseItem{
private:
	Statement* const statement;
protected:
	CaseItem(Statement* const statement);
	CaseItem(const CaseItem& item);
public:
	virtual const bool matchX() = 0;
	virtual const bool matchZ() = 0;
	virtual const bool match() = 0;

	Statement* const get_statement() const;
	virtual ~CaseItem();
};



#endif /* INCLUDE_AST_STATEMENT_CASE_CASEITEM_H_ */
