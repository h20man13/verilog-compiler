/*
 * Declaration.h
 *
 *  Created on: Jul 19, 2021
 *      Author: jacob
 */

#ifndef OUTPUT_WIRE_SCALAR_DECLARATION_H
#define OUTPUT_WIRE_SCALAR_DECLARATION_H

#include "ast/mod_item/declaration/net/wire/WireScalarDeclaration.h"

#include "ast/mod_item/declaration/RegValue.h"
#include <list>

class OutputWireScalarDeclaration: WireScalarDeclaration{
public:
	OutputWireScalarDeclaration(const Position& position, std::list<Identifier* const> &reg_list);
	OutputWireScalarDeclaration(const OutputWireScalarDeclaration& declaration);

	void code_gen() const;
	void perform() const;
};



#endif /* INCLUDE_AST_MOD_ITEM_DECLARATION_DECLARATION_H_ */
