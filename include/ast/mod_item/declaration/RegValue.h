/*
 * RegValue.h
 *
 *  Created on: Jul 19, 2021
 *      Author: jacob
 */

#ifndef REGVALUE_H
#define REGVALUE_H

class RegValue{
public:
	virtual void declare() const = 0;
public:
	virtual ~RegValue() = 0;
};



#endif /* INCLUDE_AST_MOD_ITEM_DECLARATION_REG_REGVALUE_H_ */
