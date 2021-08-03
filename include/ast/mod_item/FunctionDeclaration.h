/*
 * TaskDeclaration.h
 *
 *  Created on: Jul 21, 2021
 *      Author: jacob
 */

#ifndef FUNCTION_DECLARATION_H
#define FUNCTION_DECLARATION_H

#include "ast/mod_item/ModItem.h"
#include "ast/mod_item/declaration/Declaration.h"
#include "ast/expression/Identifier.h"
#include "ast/statement/Statement.h"
#include <list>

class FunctionDeclaration: public ModItem{
private:
	Declaration* const func_name;
	std::list<Declaration* const> paramaters;
	std::list<Declaration* const> local;
	Statement* const statement;
	SymbolTable* const table;
public:

	FunctionDeclaration(const Position& position, Declaration* const func_name, std::list<Declaration* const> paramaters, std::list<Declaration* const> local, Statement* const statement, SymbolTable* const table);
	FunctionDeclaration(const FunctionDeclaration& declaration);

	~FunctionDeclaration();

	void code_gen() const;

	void perform() const;
};



#endif
