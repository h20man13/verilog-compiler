/*
 * Assignment.h
 *
 *  Created on: Jul 15, 2021
 *      Author: jacob
 */

#ifndef CONTINUOUS_H
#define CONTINUOUS_H

#include "../assignment/Assignment.h"
#include "ast/expression/LValue.h"
#include "ast/expression/Expression.h"

/**
 * The assignment template is used to create assignments in verilog. In verilog their are 3 types of assignments, Blocking, NonBlocking, and continuous assignments
 * @author Jacob Bauer
 */
class Continuous: Assignment{
protected:
	Continuous(const Position& position, LValue* const left, Expression* const right);
	Continuous(const Continuous& assignment);
private:

	/**
	 *
	 * The execute method is used to interpret statements
	 * @return None
	 */

	void execute() const;

	/**
	 * The code gen method generates the LLVM ir for the statement
	 */
	void code_gen() const;
};



#endif
