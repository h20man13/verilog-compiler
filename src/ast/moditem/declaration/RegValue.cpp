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
	virtual ~RegValue() = 0;
};



#endif
