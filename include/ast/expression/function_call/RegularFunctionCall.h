/*
 * Concatenation.h
 *
 *  Created on: Jun 29, 2021
 *      Author: jacob
 */

#ifndef REGULARFUNCTIONCALL_H
#define REGULARFUNCTIONCALL_H

#include "ast/expression/Expression.h"
#include "ast/expression/function_call/FunctionCall.h"
#include <list>

class RegularFunctionCall: FunctionCall{
public:

	RegularFunctionCall(Position& position, std::string& function_name, std::list<Expression*> &concat_list);

	void code_gen() const;

	ObjBase* const evaluate();

	~RegularFunctionCall();

};



#endif
