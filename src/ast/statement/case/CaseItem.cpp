#include "ast/statement/case/CaseItem.h"


CaseItem::~CaseItem(){
	delete statement;
}

CaseItem::CaseItem(Statement* const statement): statement(statement){}

CaseItem::CaseItem(const CaseItem& item): statement(item.statement){}


Statement* const CaseItem::get_statement() const {
	return statement;
}

