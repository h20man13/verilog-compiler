#include "ast/statement/case/CaseX.h"

CaseX::CaseX(const Position& position, Expression* const expression, std::list<CaseItem* const> &item_list): Case(position, expression, item_list){}

CaseX::CaseX(const CaseX& item): Case(item){}

void CaseX::execute() const{

}

void CaseX::code_gen() const{

}
