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

class WireVectorDeclaration: WireDeclaration, VectorDeclaration{
public:
	WireVectorDeclaration(const Position& position, Expression* const start, Expression* const end, std::list<Identifier* const> &reg_list);
	WireVectorDeclaration(const WireVectorDeclaration& declaration);

	virtual void code_gen() const;
	virtual void perform() const;
};



#endif
