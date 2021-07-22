/*
 * Module.h
 *
 *  Created on: Jul 21, 2021
 *      Author: jacob
 */

#ifndef MODULE_H
#define MODULE_H

#include "common/Position.h"
#include "ast/mod_item/ModItem.h"
#include "ast/expression/Identifier.h"
#include <list>

class Module: AstNode{
private:
	std::list<ModItem* const> mod_item_list;
public:
	~Module();
	Module(const Position& position, Identifier* const mod_name, std::list<ModItem* const> &mod_item_list);
	Module(const Module& module);

	void interpret() const;

	void code_gen() const;
};



#endif
