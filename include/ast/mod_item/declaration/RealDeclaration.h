/*
 * RealDeclaration.h
 *
 *  Created on: Jul 20, 2021
 *      Author: jacob
 */

#ifndef REALDECLARATION_H
#define REALDECLARATION_H

#include "ast/mod_item/declaration/Declaration.h"
#include "ast/expression/Identifier.h"
#include <list>

class RealDeclaration: Declaration{
private:
	std::list<Identifier* const> ident_list;
public:
	RealDeclaration(const Position& position, std::list<Identifier* const> &ident_list);
	RealDeclaration(const RealDeclaration& real_declaration);
	~RealDeclaration();

	void code_gen() const;

	void perform() const;
};



#endif
