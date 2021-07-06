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

/**
 * The regular function call ast node is for functions that are called without a $ and are created by the programmer
 * @author Jacob Bauer
 */
class RegularFunctionCall: public FunctionCall{
public:

	/**
	 * Creates a function call object
	 * @param position  the position of the function
	 * @param function_name  the name of the function
	 * @param param_list  the list of parameters that are in the function call
	 */
	RegularFunctionCall(const Position& position, const std::string& function_name, const std::list<Expression* const> &param_list);

	/**
	 * The copy constructor for function creates a copy of the regular function call
	 * @param call  the function call that will be coppied
	 */
	RegularFunctionCall(const RegularFunctionCall& call);

	/**
	 * Used to emit the llvm ir that will be used for function calls
	 */
	void code_gen() const;

	/**
	 * Used to interpret the function call
	 * @return  an object
	 */
	ObjBase* const evaluate();

	~RegularFunctionCall();

};



#endif
