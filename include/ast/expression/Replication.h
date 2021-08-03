/*
 * Replication.h
 *
 *  Created on: Jun 30, 2021
 *      Author: jacob
 */

#ifndef REPLICATION_H
#define REPLICATION_H

#include "ast/expression/Expression.h"
#include "ast/expression/ConstantExpression.h"

/**
 * The Replication class is for ast nodes representing verilogs replication operator. This operator is used to replicate an arrangement of wires or registers
 * @author Jacob Bauer
 */
class Replication : public Expression{
private:
	ConstantExpression* const times; //the number of times the expression should be replicated
	Expression* const exp; //the expression to be replicated

public:

	/**
	 * The Replication constructor constructs a replication ast node from 3 parameters:
	 * @param position  the position of the object inside the stream
	 * @param times  the amount of times the expression should be replicated
	 * @param exp  the expression that should be replicated
	 */
	Replication(const Position& position, ConstantExpression* const times, Expression* const exp);

	/**
	 * The copy constructor takes in a replication object and it copies it
	 * @param expression
	 */
	Replication(const Replication& expression);

	/**
	 * The code_gen method emits the llvm IR required to generate the
	 */
	void code_gen() const;

	/**
	 * The evaluate functions interprets the replication
	 * @return  the replication to be evaluated
	 */

	ObjBase* const evaluate();

	/**
	 * The destructor for replications deletes all of the expressions associated with the replication
	 */
	~Replication();


};



#endif
