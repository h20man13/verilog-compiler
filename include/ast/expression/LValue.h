/*
 * LValue.h
 *
 *  Created on: Jul 12, 2021
 *      Author: jacob
 */

#ifndef LVALUE_H
#define LVALUE_H


#include "OO-Types/include/Object.h"
#include "ast/AstNode.h"
#include "SymbolTable.h"

class LValue: public virtual AstNode{
protected:
	SymbolTable* const table;
public:
   LValue(SymbolTable* const table);
   LValue(const LValue& lvalue);
   virtual ~LValue() = 0;
   virtual Object* const access() const = 0;
};



#endif /* INCLUDE_AST_EXPRESSION_LVALUE_H_ */
