/*
 * InitialStatement.h
 *
 *  Created on: Jul 20, 2021
 *      Author: jacob
 */

#ifndef INITIAL_STATEMENT_H
#define INITIAL_STATEMENT_H

#include "ast/mod_item/ModItem.h"
#include "ast/statement/Statement.h"

class InitialStatement: public ModItem{
private:
	Statement* const statement;
public:
	InitialStatement(const Position& position, Statement* const statement);
	InitialStatement(const InitialStatement& statement);
	~InitialStatement();

	void perform() const;
	void code_gen() const;
};



#endif
