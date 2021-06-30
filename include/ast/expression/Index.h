/*
 * Concatenation.h
 *
 *  Created on: Jun 29, 2021
 *      Author: jacob
 */

#ifndef INDEX_H
#define INDEX_H

#include "ast/expression/Expression.h"
#include <list>

class Index: Expression{
private:
	Position position;
	std::string lexeme;
	Expression* const index;
public:

	Index(const Position& position, const std::string& lexeme, const Expression* const index);

	void code_gen() const;

	ObjBase* const evaluate();

};



#endif
