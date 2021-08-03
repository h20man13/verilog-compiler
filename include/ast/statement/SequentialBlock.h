/*
 * Statement.h
 *
 *  Created on: Jul 12, 2021
 *      Author: jacob
 */

#ifndef SEQUENTIALBLOCK_H
#define SEQUENTIALBLOCK_H

#include "ast/statement/Statement.h"
#include "common/Position.h"
#include "common/types/ObjBase.h"
#include <list>

/**
 * The statement abstract class is used to store statement objects on the ast tree
 * @author Jacob Bauer
 */

class SequentialBlock: public Statement{

	private:
	   std::list<Statement* const> statement_list;
	   ~SequentialBlock();
	public:

	SequentialBlock(const Position& position, std::list<Statement* const> statement_list);

	SequentialBlock(const SequentialBlock& seq_block);

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
