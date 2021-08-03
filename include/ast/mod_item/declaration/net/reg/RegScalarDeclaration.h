/*
 * Declaration.h
 *
 *  Created on: Jul 19, 2021
 *      Author: jacob
 */

#ifndef REGSCALARDECLARATION_H
#define REGSCALARDECLARATION_H

#include "ast/mod_item/declaration/net/ScalarDeclaration.h"
#include "ast/mod_item/declaration/net/reg/RegDeclaration.h"

#include "ast/mod_item/declaration/RegValue.h"
#include <list>

class RegScalarDeclaration: public RegDeclaration, public ScalarDeclaration{
public:
	RegScalarDeclaration(const Position& position, std::list<RegValue* const> &reg_list, SymbolTable* const table);
	RegScalarDeclaration(const RegScalarDeclaration& declaration);

	virtual void code_gen() const;
	virtual void perform() const;
};



#endif /* INCLUDE_AST_MOD_ITEM_DECLARATION_DECLARATION_H_ */
