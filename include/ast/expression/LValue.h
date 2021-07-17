/*
 * LValue.h
 *
 *  Created on: Jul 12, 2021
 *      Author: jacob
 */

#ifndef LVALUE_H
#define LVALUE_H

#include "common/types/ObjBase.h"

class LValue{

protected:
	virtual ObjBase* const access() const = 0;
public:
   virtual ~LValue() = 0;
};



#endif /* INCLUDE_AST_EXPRESSION_LVALUE_H_ */
