/*
 * Statement.h
 *
 *  Created on: Jul 12, 2021
 *      Author: jacob
 */

#ifndef FOREVER_H
#define FOREVER_H

#include "common/Position.h"
#include "OO-Types/include/Object.h"
#include "ast/statement/Statement.h"
#include "ast/expression/Expression.h"

/**
 * The statement abstract class is used to store statement objects on the ast tree
 * @author Jacob Bauer
 */

class Forever: public Statement{

	private:
	Statement* const statement;

	~Forever();

	public:

	Forever(const Position& position, Statement* const statement);

	Forever(const Forever& forever);

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
