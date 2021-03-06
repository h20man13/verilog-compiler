/*
 * Statement.h
 *
 *  Created on: Jul 12, 2021
 *      Author: jacob
 */

#ifndef EMPTYSTATEMENT_H
#define EMPTYSTATEMENT_H

#include "common/Position.h"
#include "OO-Types/include/Object.h"
#include "ast/statement/Statement.h"

/**
 * The statement abstract class is used to store statement objects on the ast tree
 * @author Jacob Bauer
 */

class EmptyStatement: public Statement{

	private:
	~EmptyStatement();

	public:

	EmptyStatement(const Position& position);

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
