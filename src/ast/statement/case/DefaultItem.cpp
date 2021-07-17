#include "ast/statement/case/DefaultItem.h"

DefaultItem::DefaultItem(Statement* const statement): CaseItem(statement){}

const bool DefaultItem::matchX(){
	return true;
}

const bool DefaultItem::matchZ(){
	return true;
}

const bool DefaultItem::match(){
	return true;
}
