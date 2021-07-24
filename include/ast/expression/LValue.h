/*
 * LValue.h
 *
 *  Created on: Jul 12, 2021
 *      Author: jacob
 */

#ifndef LVALUE_H
#define LVALUE_H

#include "common/types/ObjBase.h"

class LValue: Expression{

protected:
	virtual ObjBase* const access() const = 0;
public:
   virtual ~LValue() = 0;

   virtual ObjBase* const evaluate() = 0;

   virtual void code_gen() const = 0;
};



#endif /* INCLUDE_AST_EXPRESSION_LVALUE_H_ */
