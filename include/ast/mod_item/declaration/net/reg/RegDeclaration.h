/*
 * Declaration.h
 *
 *  Created on: Jul 19, 2021
 *      Author: jacob
 */

#ifndef REGDECLARATION_H
#define REGDECLARATION_H

#include "ast/mod_item/declaration/Declaration.h"
#include "ast/mod_item/declaration/RegValue.h"
#include <list>

class RegDeclaration: Declaration{
private:
	std::list<RegValue* const> reg_list;
protected:
	RegDeclaration(const Position& position, std::list<RegValue* const> &reg_list);
	RegDeclaration(const RegDeclaration& declaration);

	virtual ~RegDeclaration();

	virtual void code_gen() const = 0;
	virtual void perform() const = 0;
};



#endif /* INCLUDE_AST_MOD_ITEM_DECLARATION_DECLARATION_H_ */
