#include "ast/expression/TernaryOperation.h"

TernaryOperation::TernaryOperation(const Position& position, Expression* const check, Expression* const left, Expression* const right): AstNode(position), check(check), left(left), right(right){}

TernaryOperation::TernaryOperation(const TernaryOperation& expression): AstNode(expression.get_position()), check(expression.check), left(expression.left), right(expression.right) {}

void TernaryOperation::code_gen() const {
	//TODO -- generate llvm code
}

Object* const TernaryOperation::evaluate(){
	Object* const check = this->check->evaluate();

	Object* to_ret;
	if(check->bool_value()){
		to_ret = left->evaluate();
	} else {
		to_ret = right->evaluate();
	}

	//delete check; //delete the dynamic memory in the check expression

	return to_ret;
}

TernaryOperation::~TernaryOperation(){
	delete check;
	delete left;
	delete right;
}

