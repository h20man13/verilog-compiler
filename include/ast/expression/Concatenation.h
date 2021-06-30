/*
 * Concatenation.h
 *
 *  Created on: Jun 29, 2021
 *      Author: jacob
 */

#ifndef CONCATENATION_H
#define CONCATENATION_H

#include "ast/expression/Expression.h"
#include <list>

class Concatenation: Expression{
private:
	const std::list<Expression* const> concat_list;
public:

	Concatenation(Position& position, std::list<Expression*> &concat_list);

	void code_gen() const;

	ObjBase* const evaluate();

};



#endif
