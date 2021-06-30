/*
 * Concatenation.h
 *
 *  Created on: Jun 29, 2021
 *      Author: jacob
 */

#ifndef SLICE_H
#define SLICE_H

#include "ast/expression/Expression.h"
#include <list>

class Slice: Expression{
private:
	Position position;
	std::string lexeme;
	Expression* const begin;
	Expression* const end;
public:

	Slice(const Position& position, const std::string& lexeme, const Expression* const begin, const Expression* const end);

	void code_gen() const;

	ObjBase* const evaluate();

};



#endif
