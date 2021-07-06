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

/**
 * The function call interface is used to define the implementation for all function call ast nodes
 * @author Jacob Bauer
 */
class FunctionCall: public Expression{
private:
	const std::string function_name; //the function name being called
	std::list<Expression* const> param_list; //the list of parameters for the function
public:

	FunctionCall(const Position& position, const std::string& function_name, const std::list<Expression* const> &concat_list);

	FunctionCall(const FunctionCall& func_call);

	virtual void code_gen() const = 0;

	virtual ObjBase* const evaluate() = 0;

	~FunctionCall();

};



#endif
