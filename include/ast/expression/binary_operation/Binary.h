/*
 * BinaryOperation.h
 *
 *  Created on: Jun 14, 2021
 *      Author: jacob
 */

#ifndef BINARY_H
#define BINARY_H

#include "ast/expression/Expression.h"

template <typename ret_type>
class Binary: public Expression<ret_type>{
private:
	const Expression<ret_type> left;
	const Expression<ret_type> right;
protected:
	Binary(const Position& position, const Expression<ret_type>& left, const Expression<ret_type>& right);
public:
	Binary(const Binary& binop);
	virtual ~Binary();
	virtual ret_type interpret() = 0;
	virtual void code_gen();
};



#endif
