/*
 * Statement.h
 *
 *  Created on: Jul 12, 2021
 *      Author: jacob
 */

#ifndef WAIT_H
#define WAIT_H

#include "common/Position.h"
#include "OO-Types/include/Object.h"
#include "ast/statement/Statement.h"
#include "ast/expression/Expression.h"

/**
 * The statement abstract class is used to store statement objects on the ast tree
 * @author Jacob Bauer
 */

class Wait: public Statement{

	private:
	Expression* const check;
	Statement* const statement;

	~Wait();

	public:

	Wait(const Position& position, Expression* const check, Statement* const statement);

	Wait(const Wait& wait);

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



#endif
