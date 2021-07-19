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
public:

	CaseX(const Position& position, Expression* const expression, std::list<CaseItem* const> &item_list);
	CaseX(const CaseX& case_x);


	void execute() const;

	void code_gen() const;
};



#endif
