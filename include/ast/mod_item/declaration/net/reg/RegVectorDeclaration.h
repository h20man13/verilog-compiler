/*
 * RegVectorDeclaration.h
 *
 *  Created on: Jul 19, 2021
 *      Author: jacob
 */

#ifndef REG_VECTOR_DECLARATION_H
#define REG_VECTOR_DECLARATION_H

#include "ast/mod_item/declaration/net/VectorDeclaration.h"
#include "ast/mod_item/declaration/net/reg/RegDeclaration.h"

#include "ast/mod_item/declaration/RegValue.h"
#include <list>

class RegVectorDeclaration: public RegDeclaration, public VectorDeclaration{
public:
	RegVectorDeclaration(const Position& position, ConstantExpression* const start, ConstantExpression* const end, std::list<RegValue* const> &reg_list, SymbolTable* const table);
	RegVectorDeclaration(const RegVectorDeclaration& declaration);

	virtual void code_gen() const;
	virtual void perform() const;
};



#endif
