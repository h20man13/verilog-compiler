/*
 * Replication.h
 *
 *  Created on: Jun 30, 2021
 *      Author: jacob
 */

#ifndef REPLICATION_H
#define REPLICATION_H

#include "ast/expression/Expression.h"

class Replication : Expression{
private:
	Expression* const times;
	Expression* const exp;

public:
	Replication(const Position& position, const Expression* const times, const Expression* const exp);

	void code_gen();

	ObjBase* const evaluate();


};



#endif
