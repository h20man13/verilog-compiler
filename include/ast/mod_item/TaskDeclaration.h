/*
 * TaskDeclaration.h
 *
 *  Created on: Jul 21, 2021
 *      Author: jacob
 */

#ifndef TASKDECLARATION_H
#define TASKDECLARATION_H

#include "ast/mod_item/ModItem.h"
#include "ast/mod_item/declaration/Declaration.h"
#include "ast/expression/Identifier.h"
#include "ast/statement/Statement.h"
#include <list>

class TaskDeclaration: ModItem{
private:
	Identifier* const task_name;
	std::list<Declaration* const> param;
	std::list<Declaration* const> local;
	Statement* const statement;
public:

	TaskDeclaration(const Position& position, Identifier* const task_name, std::list<Declaration* const> param, std::list<Declaration* const> local, Statement* const statement);
	TaskDeclaration(const TaskDeclaration& declaration);
	~TaskDeclaration();

	void code_gen() const;

	void perform() const;
};



#endif
