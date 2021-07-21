/*
 * Assignment.h
 *
 *  Created on: Jul 15, 2021
 *      Author: jacob
 */

#ifndef ASSIGNMENT_H_
#define ASSIGNMENT_H_

#include "ast/statement/Statement.h"
#include "ast/expression/LValue.h"
#include "ast/expression/Expression.h"

/**
 * The assignment template is used to create assignments in verilog. In verilog their are 3 types of assignments, Blocking, NonBlocking, and continuous assignments
 * @author Jacob Bauer
 */
class ProceduralAssignment: Statement{
protected:
	ProceduralAssignment(const Position& position, LValue* const left, Expression* const right);
	ProceduralAssignment(const ProceduralAssignment& assignment);
	LValue* const left;
	Expression* const right;
public:

	/**
	 *
	 * The execute method is used to interpret statements
	 * @return None
	 */

	virtual void execute() const = 0;

	/**
	 * The code gen method generates the LLVM ir for the statement
	 */
	virtual void code_gen() const = 0;


	~ProceduralAssignment();
};



#endif /* INCLUDE_AST_STATEMENT_ASSIGNMENT_ASSIGNMENT_H_ */