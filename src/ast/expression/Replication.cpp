#include "ast/expression/Replication.h"

Replication::Replication(const Position& position, ConstantExpression* const times, Expression* const exp): AstNode(position), times(times), exp(exp){}

Replication::Replication(const Replication& expression): AstNode(expression.get_position()), times(expression.times), exp(expression.exp){};

void Replication::code_gen() const {
	//TODO - ADD llvm emit code here
}

Object* const Replication::evaluate(){
	return NULL;
}

Replication::~Replication(){
	delete times;
	delete exp;
}
