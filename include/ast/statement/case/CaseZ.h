/*
 * case.h
 *
 *  Created on: Jul 15, 2021
 *      Author: jacob
 */

#ifndef CASEZ_H
#define CASEZ_H

#include "ast/statement/case/Case.h"
#include "ast/statement/case/CaseItem.h"
#include <list>

class CaseZ: Case{
public:

	CaseZ(const Position& position, Expression* const expression, std::list<CaseItem* const> &item_list);

	CaseZ(const CaseZ& case_z);

	void execute() const;

	void code_gen() const;
};



#endif
