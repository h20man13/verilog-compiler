/*
 * RegVectorDeclaration.h
 *
 *  Created on: Jul 19, 2021
 *      Author: jacob
 */

#ifndef OUTPUT_VECTOR_DECLARATION_H
#define OUTPUT_VECTOR_DECLARATION_H

#include "ast/mod_item/declaration/net/wire/WireVectorDeclaration.h"

#include "ast/mod_item/declaration/RegValue.h"
#include <list>

class OutputWireVectorDeclaration: WireVectorDeclaration{
public:
	OutputWireVectorDeclaration(const Position& position, Expression* const start, Expression* const end, std::list<Identifier* const> &ident_list);
	OutputWireVectorDeclaration(const OutputWireVectorDeclaration& declaration);

	void code_gen() const;
	void perform() const;
};



#endif
