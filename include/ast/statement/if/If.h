/*
 * Statement.h
 *
 *  Created on: Jul 12, 2021
 *      Author: jacob
 */

#ifndef IF_H
#define IF_H

#include "common/Position.h"
#include "OO-Types/include/Object.h"
#include "ast/statement/Statement.h"
#include "ast/expression/Expression.h"

/**
 * The statement abstract class is used to store statement objects on the ast tree
 * @author Jacob Bauer
 */

class If: public Statement{


protected:
Expression *const check;
Statement *const if_statement;

public:

	If(const Position &position, Expression *const check, Statement *const if_statement);

	If(const If& if_stat);

	/**
	 * The code gen method generates the LLVM ir for the statement
	 */
	virtual void code_gen() const;

	/**
	 *
	 * The execute method is used to interpret statements
	 * @return None
	 */

	virtual void execute() const;

	virtual ~If();
};



#endif /* INCLUDE_AST_STATEMENT_STATEMENT_H_ */
