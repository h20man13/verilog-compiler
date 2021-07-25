/*
 * Assignment.h
 *
 *  Created on: Jul 15, 2021
 *      Author: jacob
 */

#ifndef PROCEDURAL_ASSIGNMENT_H
#define PROCEDURAL_ASSIGNMENT_H

#include "ast/statement/Statement.h"
#include "ast/expression/LValue.h"
#include "ast/expression/Expression.h"

/**
 * The assignment template is used to create assignments in verilog. In verilog their are 3 types of assignments, Blocking, NonBlocking, and continuous assignments
 * @author Jacob Bauer
 */
class ProceduralAssignment: public Statement{
protected:
	ProceduralAssignment(const Position& position);
	ProceduralAssignment(const ProceduralAssignment& assignment);
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


	virtual ~ProceduralAssignment() = 0;
};



#endif /* INCLUDE_AST_STATEMENT_ASSIGNMENT_ASSIGNMENT_H_ */
