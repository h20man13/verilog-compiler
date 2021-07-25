/*
 * CaseItem.h
 *
 *  Created on: Jul 15, 2021
 *      Author: jacob
 */

#ifndef DEFAULTITEM_H
#define DEFAULTITEM_H

#include "ast/statement/Statement.h"
#include "ast/statement/case/CaseItem.h"
#include <list>

class DefaultItem: public CaseItem{
public:
	DefaultItem(Statement* const statement);
	DefaultItem(const DefaultItem& item);
	const bool matchX();
	const bool matchZ();
	const bool match();

};



#endif /* INCLUDE_AST_STATEMENT_CASE_CASEITEM_H_ */
