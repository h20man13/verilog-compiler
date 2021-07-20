/*
 * Declaration.h
 *
 *  Created on: Jul 19, 2021
 *      Author: jacob
 */

#ifndef WIREDECLARATION_H
#define WIREDECLARATION_H

#include "ast/mod_item/declaration/Declaration.h"
#include "ast/expression/Identifier.h"
#include <list>

class WireDeclaration: Declaration{
private:
	std::list<Identifier* const> ident_list;
protected:
	WireDeclaration(const Position& position, std::list<Identifier* const> &ident_list);
	WireDeclaration(const WireDeclaration& declaration);

	virtual ~WireDeclaration();

	virtual void code_gen() const = 0;
	virtual void perform() const = 0;
};



#endif /* INCLUDE_AST_MOD_ITEM_DECLARATION_DECLARATION_H_ */
