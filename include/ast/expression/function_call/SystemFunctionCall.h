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

/**
 * The system function call is used to create a system function or a function that starts with $
 * @author Jacob Bauer
 */
class SystemFunctionCall: public FunctionCall{
public:

	/**
	 * The system function call is used with a position, a function name, and a parameter list
	 * @param position  the position object keeps track of the position of the ast node
	 * @param function_name  the function name is the name of the function
	 * @param param_list  the param list is the paramater list of the system function
	 */

	SystemFunctionCall(const Position& position, const std::string& function_name, const std::list<Expression* const> &param_list, SymbolTable* const table);

	/**
	 * The copy constructor is used to copy a System function call
	 * @param func  the function that will be coppied
	 */
	SystemFunctionCall(const SystemFunctionCall& func);

	/**
	 * The code generation function is used to generate llvm IR for a system function call. These will translate to functions that are already available in c++
	 */
	void code_gen() const;

	/**
	 * The evaluate method evaluates a system function and it returns a value of type object
	 * @return  an object
	 */
	Object* const evaluate();


};



#endif
