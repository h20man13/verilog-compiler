#include "ast/expression/ConstantExpression.h"

ConstantExpression::ConstantExpression(const Position& position, Expression* const expression): AstNode(position), expression(expression){}

ConstantExpression::ConstantExpression(const ConstantExpression& expression): AstNode(expression), expression(expression.expression){}

void ConstantExpression::code_gen() const {
	//LLVM generate llvm
}

ObjBase* const ConstantExpression::evaluate() {
	return NULL;
}

ConstantExpression::~ConstantExpression(){
	delete expression;
}
