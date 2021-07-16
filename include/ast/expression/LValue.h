/*
 * LValue.h
 *
 *  Created on: Jul 12, 2021
 *      Author: jacob
 */

#ifndef LVALUE_H
#define LVALUE_H

class LValue{

protected:
	virtual ObjBase* const access() const = 0;

	virtual ~LValue();

};



#endif /* INCLUDE_AST_EXPRESSION_LVALUE_H_ */
