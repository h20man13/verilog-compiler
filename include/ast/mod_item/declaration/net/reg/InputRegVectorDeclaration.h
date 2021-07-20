/*
 * RegVectorDeclaration.h
 *
 *  Created on: Jul 19, 2021
 *      Author: jacob
 */

#ifndef INPUT_REG_VECTOR_DECLARATION_H
#define INPUT_REG_VECTOR_DECLARATION_H

#include "ast/mod_item/declaration/net/reg/RegVectorDeclaration.h"

#include "ast/mod_item/declaration/RegValue.h"
#include <list>

class InputRegVectorDeclaration: RegVectorDeclaration{
public:
	InputRegVectorDeclaration(const Position& position, Expression* const start, Expression* const end, std::list<RegValue* const> &reg_list);
	InputRegVectorDeclaration(const InputRegVectorDeclaration& declaration);

	void code_gen() const;
	void perform() const;
};



#endif
