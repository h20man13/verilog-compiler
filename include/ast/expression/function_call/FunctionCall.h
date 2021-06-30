/*
 * Concatenation.h
 *
 *  Created on: Jun 29, 2021
 *      Author: jacob
 */

#ifndef FUNCTIONCALL_H
#define FUNCTIONCALL_H

#include "ast/expression/Expression.h"
#include <list>

class FunctionCall: Expression{
private:
	Position position;
	std::string function_name;
	const std::list<Expression* const> param_list;
public:

	FunctionCall(Position& position, std::list<Expression*> &concat_list);

	virtual void code_gen() const = 0;

	virtual ObjBase* const evaluate() = 0;

};



#endif
