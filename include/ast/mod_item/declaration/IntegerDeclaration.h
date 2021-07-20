/*
 * IntegerDeclaration.h
 *
 *  Created on: Jul 20, 2021
 *      Author: jacob
 */

#ifndef INTEGER_DECLARATION_H
#define INTEGER_DECLARATION_H

#include "ast/mod_item/declaration/Declaration.h"
#include "ast/mod_item/declaration/RegValue.h"
#include <list>

class IntegerDeclaration: Declaration{
private:
	std::list<RegValue* const> reg_list;
public:
	IntegerDeclaration(const Position& position, std::list<RegValue* const> &reg_list);
	IntegerDeclaration(const IntegerDeclaration& real_declaration);

	~IntegerDeclaration();

	void code_gen() const;

	void perform() const;
};



#endif
