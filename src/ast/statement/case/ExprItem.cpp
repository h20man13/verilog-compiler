
#include "ast/statement/case/ExprItem.h"

ExprItem::ExprItem(Expression* const expression, Statement* const statement): CaseItem(statement), expression(expression){}

const bool ExprItem::matchX(){
	return true;
}

const bool ExprItem::matchZ(){
	return true;
}

const bool ExprItem::match(){
	return true;
}
