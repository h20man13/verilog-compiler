/*
 * EmptyDeclaration.h
 *
 *  Created on: Jul 28, 2021
 *      Author: jacob
 */

#ifndef UNIDENTIFIED_DECLARATION_H
#define UNIDENTIFIED_DECLARATION_H

#include "ast/mod_item/declaration/Declaration.h"
#include "ast/expression/Identifier.h"

class UnidentifiedDeclaration: public Declaration{
private:
	Identifier* const ident;
public:
	UnidentifiedDeclaration(const Position& position, Identifier* const ident, SymbolTable* const table);
	UnidentifiedDeclaration(const UnidentifiedDeclaration& declaration);
	~UnidentifiedDeclaration();
	void perform() const;
	void code_gen() const;
};



#endif /* INCLUDE_AST_MOD_ITEM_DECLARATION_EMPTYDECLARATION_H_ */
