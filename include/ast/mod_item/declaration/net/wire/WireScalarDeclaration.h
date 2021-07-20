/*
 * Declaration.h
 *
 *  Created on: Jul 19, 2021
 *      Author: jacob
 */

#ifndef WIRE_SCALAR_DECLARATION_H
#define WIRE_SCALAR_DECLARATION_H

#include "ast/mod_item/declaration/net/ScalarDeclaration.h"
#include "ast/mod_item/declaration/net/wire/WireDeclaration.h"

#include "ast/mod_item/declaration/RegValue.h"
#include <list>

class WireScalarDeclaration: WireDeclaration, ScalarDeclaration{
public:
	WireScalarDeclaration(const Position& position, std::list<RegValue* const> &reg_list);
	WireScalarDeclaration(const WireScalarDeclaration& declaration);

	virtual void code_gen() const;
	virtual void perform() const;
};



#endif /* INCLUDE_AST_MOD_ITEM_DECLARATION_DECLARATION_H_ */
