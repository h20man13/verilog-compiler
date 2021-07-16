/*
 * Concatenation.h
 *
 *  Created on: Jun 29, 2021
 *      Author: jacob
 */

#ifndef TASKCALL_H
#define TASKCALL_H

#include "ast/statement/Statement.h"
#include "ast/expression/Expression.h"
#include <list>

/**
 * The function call interface is used to define the implementation for all function call ast nodes
 * @author Jacob Bauer
 */
class TaskCall: public Statement{
private:
	const std::string function_name; //the function name being called
	std::list<Expression* const> param_list; //the list of parameters for the function
public:

	TaskCall(const Position& position, const std::string& function_name, const std::list<Expression* const> &concat_list);

	TaskCall(const TaskCall& func_call);

	virtual void code_gen() const;

	virtual void const execute();

	~TaskCall();

};



#endif
