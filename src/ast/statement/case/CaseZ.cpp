#include "ast/statement/case/CaseZ.h"


CaseZ::CaseZ(const Position& position, Expression* const expression, std::list<CaseItem* const> &item_list): Case(position, expression, item_list){}

CaseZ::CaseZ(const CaseZ& item): Case(item){}

void CaseZ::execute() const {

}

void CaseZ::code_gen() const {

}
