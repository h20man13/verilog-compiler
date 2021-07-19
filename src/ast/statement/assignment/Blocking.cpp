#include "ast/expression/LValue.h"
#include "ast/expression/Expression.h"
#include "ast/statement/assignment/Blocking.h"

Blocking::Blocking(const Position& position, LValue* const left, Expression* const right): Assignment(position, left, right){}

Blocking::Blocking(const Blocking& assignment): Assignment(assignment){}

void Blocking::execute() const {

}

void Blocking::code_gen() const {

}

