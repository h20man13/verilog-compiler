/*
 * RegVectorDeclaration.h
 *
 *  Created on: Jul 19, 2021
 *      Author: jacob
 */

#ifndef OUTPUT_REG_VECTOR_DECLARATION_H
#define OUTPUT_REG_VECTOR_DECLARATION_H

#include "ast/mod_item/declaration/net/reg/RegVectorDeclaration.h"

#include "ast/mod_item/declaration/RegValue.h"
#include <list>

class OutputRegVectorDeclaration: public RegVectorDeclaration{
public:
	OutputRegVectorDeclaration(const Position& position, ConstantExpression* const start, ConstantExpression* const end, std::list<RegValue* const> &reg_list, SymbolTable* const table);
	OutputRegVectorDeclaration(const OutputRegVectorDeclaration& declaration);

	void code_gen() const;
	void perform() const;
};



#endif
