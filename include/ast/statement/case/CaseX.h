/*
 * case.h
 *
 *  Created on: Jul 15, 2021
 *      Author: jacob
 */

#ifndef CASEX_H
#define CASEX_H

#include "ast/statement/case/Case.h"
#include "ast/statement/case/CaseItem.h"
#include <list>

class CaseX: Case{
protected:

	CaseX(const Position& position, std::list<const CaseItem*> item_list);

	void const execute() const;

	void code_gen() const;
};



#endif /* INCLUDE_AST_STATEMENT_CASE_CASE_H_ */
