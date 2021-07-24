/*
 * Statement.h
 *
 *  Created on: Jul 12, 2021
 *      Author: jacob
 */

#ifndef FOR_H
#define FOR_H

#include "common/Position.h"
#include "common/types/ObjBase.h"
#include "ast/statement/assignment/Blocking.h"
#include "ast/expression/Expression.h"

/**
 * The statement abstract class is used to store statement objects on the ast tree
 * @author Jacob Bauer
 */

class For: Statement{

	private:
	Blocking* const init;
	Expression* const check;
	Blocking* const incriment;

	Statement* const body;

	~For();

	public:

	For(const Position& position, Blocking* const init, Expression* const check, Blocking* const incriment, Statement* const body);

	For(const For& for_stat);

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
