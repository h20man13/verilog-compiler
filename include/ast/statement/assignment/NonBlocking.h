/*
 * Assignment.h
 *
 *  Created on: Jul 15, 2021
 *      Author: jacob
 */

#ifndef NONBLOCKING_H
#define NONBLOCKING_H

#include "../assignment/ProceduralAssignment.h"
#include "ast/expression/LValue.h"
#include "ast/expression/Expression.h"
#include <list>

/**
 * The assignment template is used to create assignments in verilog. In verilog their are 3 types of assignments, Blocking, NonBlocking, and continuous assignments
 * @author Jacob Bauer
 */
class NonBlocking: ProceduralAssignment{
protected:
	NonBlocking(const Position& position, LValue* const left, Expression* const right, NonBlocking* const next);
	NonBlocking(const NonBlocking& assignment);
private:
	NonBlocking* const next;
public:
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



#endif /* INCLUDE_AST_STATEMENT_ASSIGNMENT_ASSIGNMENT_H_ */
