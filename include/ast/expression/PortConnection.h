/*
 * Replication.h
 *
 *  Created on: Jun 30, 2021
 *      Author: jacob
 */

#ifndef PORT_CONNECTION_H
#define PORT_CONNECTION_H

#include "ast/expression/Expression.h"
#include "ast/expression/ConstantExpression.h"

/**
 * The Replication class is for ast nodes representing verilogs replication operator. This operator is used to replicate an arrangement of wires or registers
 * @author Jacob Bauer
 */
class PortConnection : Expression{
private:
	const std::string assign; //the number of times the expression should be replicated
	const std::string value //the expression to be replicated

public:

	/**
	 * The Replication constructor constructs a replication ast node from 3 parameters:
	 * @param position  the position of the object inside the stream
	 * @param times  the amount of times the expression should be replicated
	 * @param exp  the expression that should be replicated
	 */
	PortConnection(const Position& position, const std::string& assign, const std::string& value);

	/**
	 * The copy constructor takes in a replication object and it copies it
	 * @param expression
	 */
	PortConnection(const PortConnection& connection);

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
	~PortConnection();


};



#endif
