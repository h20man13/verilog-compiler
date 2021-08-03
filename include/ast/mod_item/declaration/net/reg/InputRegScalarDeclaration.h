/*
 * Declaration.h
 *
 *  Created on: Jul 19, 2021
 *      Author: jacob
 */

#ifndef INPUT_REG_SCALAR_DECLARATION_H
#define INPUT_REG_SCALAR_DECLARATION_H

#include "ast/mod_item/declaration/net/ScalarDeclaration.h"
#include "ast/mod_item/declaration/net/reg/RegScalarDeclaration.h"

#include "ast/mod_item/declaration/RegValue.h"
#include <list>

class InputRegScalarDeclaration: public RegScalarDeclaration{
public:
	InputRegScalarDeclaration(const Position& position, std::list<RegValue* const> &reg_list, SymbolTable* const table);
	InputRegScalarDeclaration(const InputRegScalarDeclaration& declaration);

	void code_gen() const;
	void perform() const;
};



#endif /* INCLUDE_AST_MOD_ITEM_DECLARATION_DECLARATION_H_ */
