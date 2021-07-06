#include "ast/expression/EmptyExpression.h"

EmptyExpression::EmptyExpression(const Position& position): Expression(position){}

void EmptyExpression::code_gen() const {
	//do nothing this is just a place holder
}

ObjBase* const EmptyExpression::evaluate() {
	//do nothing this is just a place holder
	return NULL;
}


