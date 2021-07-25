#include "ast/expression/LValue.h"
#include "ast/expression/Expression.h"
#include "ast/statement/assignment/NonBlocking.h"

NonBlocking::NonBlocking(const Position& position, std::list<LValue* const> &lvalue_list, std::list<Expression* const> &exp_list): ProceduralAssignment(position){
	for(std::list<LValue* const>::const_iterator it = lvalue_list.begin(); it != lvalue_list.end(); it++){
		this->lvalue_list.push_back(*it);
	}

	for(std::list<Expression* const>::const_iterator it = exp_list.begin(); it != exp_list.end(); it++){
		this->exp_list.push_back(*it);
	}
}

NonBlocking::NonBlocking(const NonBlocking& assignment): ProceduralAssignment(assignment){
	for(std::list<LValue* const>::const_iterator it = assignment.lvalue_list.begin(); it != assignment.lvalue_list.end(); it++){
		this->lvalue_list.push_back(*it);
	}

	for(std::list<Expression* const>::const_iterator it = assignment.exp_list.begin(); it != assignment.exp_list.end(); it++){
		this->exp_list.push_back(*it);
	}
}

NonBlocking::~NonBlocking(){
	while(!lvalue_list.empty()){
		LValue* const lvalue = *lvalue_list.begin();
		delete lvalue;
		lvalue_list.pop_front();
	}

	while(!exp_list.empty()){
		Expression* const exp = *exp_list.begin();
		delete exp;
		exp_list.pop_front();
	}
}


void NonBlocking::execute() const {

}

void NonBlocking::code_gen() const {

}
