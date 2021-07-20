/*
 * RegVectorDeclaration.h
 *
 *  Created on: Jul 19, 2021
 *      Author: jacob
 */

#ifndef INPUT_WIRE_VECTOR_DECLARATION_H
#define INPUT_WIRE_VECTOR_DECLARATION_H

#include "ast/mod_item/declaration/net/wire/WireVectorDeclaration.h"

#include "ast/mod_item/declaration/RegValue.h"
#include <list>

class InputWireVectorDeclaration: WireVectorDeclaration{
public:
	InputWireVectorDeclaration(const Position& position, std::list<RegValue* const> &reg_list);
	InputWireVectorDeclaration(const InputWireVectorDeclaration& declaration);

	void code_gen() const;
	void perform() const;
};



#endif
