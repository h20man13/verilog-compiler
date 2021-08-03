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

class OutputWireVectorDeclaration: public WireVectorDeclaration{
public:
	OutputWireVectorDeclaration(const Position& position, ConstantExpression* const start, ConstantExpression* const end, std::list<Identifier* const> &ident_list, SymbolTable* const table);
	OutputWireVectorDeclaration(const OutputWireVectorDeclaration& declaration);

	void code_gen() const;
	void perform() const;
};



#endif
