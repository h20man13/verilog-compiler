#include "ast/statement/case/CaseZ.h"


CaseZ::CaseZ(const Position& position, Expression* const expression, std::list<CaseItem* const> &item_list): Case(position, expression, item_list){}

void CaseZ::execute() const {

}

void CaseZ::code_gen() const {

}
