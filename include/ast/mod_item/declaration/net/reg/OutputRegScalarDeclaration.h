/*
 * Declaration.h
 *
 *  Created on: Jul 19, 2021
 *      Author: jacob
 */

#ifndef OUTPUT_REG_SCALAR_DECLARATION_H
#define OUTPUT_REG_SCALAR_DECLARATION_H

#include "ast/mod_item/declaration/net/ScalarDeclaration.h"
#include "ast/mod_item/declaration/net/reg/RegScalarDeclaration.h"

#include "ast/mod_item/declaration/RegValue.h"
#include <list>

class OutputRegScalarDeclaration: RegScalarDeclaration{
public:
	OutputRegScalarDeclaration(const Position& position, std::list<RegValue* const> &reg_list);
	OutputRegScalarDeclaration(const RegScalarDeclaration& declaration);

	void code_gen() const;
	void perform() const;
};



#endif /* INCLUDE_AST_MOD_ITEM_DECLARATION_DECLARATION_H_ */
