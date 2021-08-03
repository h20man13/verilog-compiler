/*
 * RegVectorDeclaration.h
 *
 *  Created on: Jul 19, 2021
 *      Author: jacob
 */

#ifndef WIRE_VECTOR_DECLARATION_H
#define WIRE_VECTOR_DECLARATION_H

#include "ast/mod_item/declaration/net/VectorDeclaration.h"
#include "ast/mod_item/declaration/net/wire/WireDeclaration.h"

#include "ast/mod_item/declaration/RegValue.h"
#include <list>

class WireVectorDeclaration: public WireDeclaration, public VectorDeclaration{
public:
	WireVectorDeclaration(const Position& position, ConstantExpression* const start, ConstantExpression* const end, std::list<Identifier* const> &reg_list, SymbolTable* const table);
	WireVectorDeclaration(const WireVectorDeclaration& declaration);

	virtual void code_gen() const;
	virtual void perform() const;
};



#endif
