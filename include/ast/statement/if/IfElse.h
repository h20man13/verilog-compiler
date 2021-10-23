/*
 * Statement.h
 *
 *  Created on: Jul 12, 2021
 *      Author: jacob
 */

#ifndef IFELSE_H
#define IFELSE_H

#include "common/Position.h"
#include "OO-Types/include/Object.h"
#include "ast/statement/if/If.h"
#include "ast/statement/Statement.h"
#include "ast/expression/Expression.h"

/**
 * The statement abstract class is used to store statement objects on the ast tree
 * @author Jacob Bauer
 */

class IfElse: public If{

	private:
	Statement* const else_statement;

	~IfElse();

	public:

	IfElse(const Position& position, Expression* const check, Statement* const if_statement, Statement* const else_statement);

	IfElse(const IfElse& if_else);

	/**
	 * The code gen method generates the LLVM ir for the statement
	 */
	void code_gen() const;

	/**
	 *
	 * The execute method is used to interpret statements
	 * @return None
	 */

	void execute() const;
};



#endif /* INCLUDE_AST_STATEMENT_STATEMENT_H_ */
