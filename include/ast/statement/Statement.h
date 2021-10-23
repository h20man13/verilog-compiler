/*
 * Statement.h
 *
 *  Created on: Jul 12, 2021
 *      Author: jacob
 */

#ifndef STATEMENT_H
#define STATEMENT_H

#include "common/Position.h"
#include "OO-Types/include/Object.h"
#include "ast/AstNode.h"

/**
 * The statement abstract class is used to store statement objects on the ast tree
 * @author Jacob Bauer
 */

class Statement: public AstNode{
	protected:

	Statement(const Position& position);

	Statement(const Statement& stat);
	public:
	/**
	 * The code gen method generates the LLVM ir for the statement
	 */
	virtual void code_gen() const = 0;

	/**
	 *
	 * The execute method is used to interpret statements
	 * @return None
	 */

	virtual void execute() const = 0;

	virtual ~Statement() = 0;
};



#endif
