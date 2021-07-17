#include "ast/statement/case/Case.h"
#include "ast/expression/Expression.h"
#include "ast/statement/Statement.h"
#include <list>
#include "CaseItem.cpp"

Case::Case(const Position& position, Expression* const expression, std::list<CaseItem* const> &item_list): Statement(position), expression(expression){
	for(std::list<CaseItem* const>::const_iterator it = item_list.begin(); it != item_list.end(); it++){
		this->item_list.push_back(*it);
	}
}

Case::~Case(){
	delete expression;
	while(!item_list.empty()){
		CaseItem* const item = *(item_list.begin());
		this->item_list.pop_front();
		delete item;
	}
}

void Case::execute() const{

}

void Case::code_gen() const{

}


