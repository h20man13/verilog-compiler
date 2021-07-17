/*
 * Statement.h
 *
 *  Created on: Jul 12, 2021
 *      Author: jacob
 */

#ifndef STATEMENT_H
#define STATEMENT_H

#include "common/Position.h"
#include "common/types/ObjBase.h"

/**
 * The statement abstract class is used to store statement objects on the ast tree
 * @author Jacob Bauer
 */

class Statement{

    private:
	const Position position; //position to store the position of the statement object

	protected:
	Statement(const Position& position);

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

	/**
	 * Gets the position of the current statement ast node
	 * @return the position of the ast node
	 */

	const Position get_position() const;
};



#endif /* INCLUDE_AST_STATEMENT_STATEMENT_H_ */
