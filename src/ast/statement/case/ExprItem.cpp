
#include "ast/statement/case/ExprItem.h"

ExprItem::ExprItem(std::list<Expression* const> exp_list, Statement* const statement): CaseItem(statement){
	for(std::list<Expression* const>::const_iterator it = exp_list.begin(); it != exp_list.end(); it++){
		this->exp_list.push_back(*it);
	}
}

ExprItem::ExprItem(const ExprItem& item): CaseItem(item){
	for(std::list<Expression* const>::const_iterator it = item.exp_list.begin(); it != item.exp_list.end(); it++){
		this->exp_list.push_back(*it);
	}
}

ExprItem::~ExprItem(){
	while(!exp_list.empty()){
		Expression* const exp = *exp_list.begin();
		delete exp;
		exp_list.pop_front();
	}
	delete statement;
}

const bool ExprItem::matchX(){
	return true;
}

const bool ExprItem::matchZ(){
	return true;
}

const bool ExprItem::match(){
	return true;
}
