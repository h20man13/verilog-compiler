/*
 * Declaration.h
 *
 *  Created on: Jul 19, 2021
 *      Author: jacob
 */

#ifndef DECLARATION_H
#define DECLARATION_H

#include "ast/mod_item/ModItem.h"

class Declaration: public ModItem{

protected:
	Declaration(const Position& position);

	virtual void code_gen() const = 0;
	virtual void perform() const = 0;
};



#endif /* INCLUDE_AST_MOD_ITEM_DECLARATION_DECLARATION_H_ */
