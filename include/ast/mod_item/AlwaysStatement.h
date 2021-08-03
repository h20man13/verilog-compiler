/*
 * AlwaysStatement.h
 *
 *  Created on: Jul 20, 2021
 *      Author: jacob
 */

#ifndef ALWAYS_STATEMENT_H
#define ALWAYS_STATEMENT_H

#include "ast/mod_item/ModItem.h"
#include "ast/statement/Statement.h"

class AlwaysStatement: public ModItem{
private:
	Statement* const statement;
public:
	AlwaysStatement(const Position& position, Statement* const statement);
	AlwaysStatement(const AlwaysStatement& statement);
	~AlwaysStatement();

	void perform() const;
	void code_gen() const;
};



#endif
