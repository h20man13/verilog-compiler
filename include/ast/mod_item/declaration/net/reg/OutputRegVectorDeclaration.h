/*
 * RegVectorDeclaration.h
 *
 *  Created on: Jul 19, 2021
 *      Author: jacob
 */

#ifndef OUTPUT_VECTOR_DECLARATION_H
#define OUTPUT_VECTOR_DECLARATION_H

#include "ast/mod_item/declaration/net/reg/RegVectorDeclaration.h"

#include "ast/mod_item/declaration/RegValue.h"
#include <list>

class OutputRegVectorDeclaration: RegVectorDeclaration{
public:
	OutputRegVectorDeclaration(const Position& position, std::list<RegValue* const> &reg_list);
	OutputRegVectorDeclaration(const OutputRegVectorDeclaration& declaration);

	void code_gen() const;
	void perform() const;
};



#endif
