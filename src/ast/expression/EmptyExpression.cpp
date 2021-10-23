#include "ast/expression/EmptyExpression.h"

EmptyExpression::EmptyExpression(const Position& position): AstNode(position){}
EmptyExpression::EmptyExpression(const EmptyExpression& exp): AstNode(exp){}

void EmptyExpression::code_gen() const {
	//do nothing this is just a place holder
}

Object* const EmptyExpression::evaluate() {
	//do nothing this is just a place holder
	return NULL;
}


