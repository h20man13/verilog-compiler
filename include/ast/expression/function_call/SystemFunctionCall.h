/*
 * Concatenation.h
 *
 *  Created on: Jun 29, 2021
 *      Author: jacob
 */

#ifndef SYSTEMFUNCTIONCALL_H
#define SYSTEMFUNCTIONCALL_H

#include "ast/expression/Expression.h"
#include "ast/expression/function_call/FunctionCall.h"
#include <list>

class SystemFunctionCall: FunctionCall{
public:

	SystemFunctionCall(Position& position, std::string& function_name, std::list<Expression*> &concat_list);

	void code_gen() const;

	ObjBase* const evaluate();

	~SystemFunctionCall();

};



#endif
