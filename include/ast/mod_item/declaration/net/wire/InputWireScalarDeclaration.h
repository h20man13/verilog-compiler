/*
 * Declaration.h
 *
 *  Created on: Jul 19, 2021
 *      Author: jacob
 */

#ifndef INPUT_WIRE_SCALAR_DECLARATION_H
#define INPUT_WIRE_SCALAR_DECLARATION_H

#include "ast/mod_item/declaration/net/ScalarDeclaration.h"
#include "ast/mod_item/declaration/net/wire/WireScalarDeclaration.h"

#include "ast/mod_item/declaration/RegValue.h"
#include <list>

class InputWireScalarDeclaration: WireScalarDeclaration{
public:
	InputWireScalarDeclaration(const Position& position, std::list<Identifier* const> &reg_list);
	InputWireScalarDeclaration(const InputWireScalarDeclaration& declaration);

	void code_gen() const;
	void perform() const;
};



#endif /* INCLUDE_AST_MOD_ITEM_DECLARATION_DECLARATION_H_ */
