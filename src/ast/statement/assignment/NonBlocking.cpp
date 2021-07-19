#include "ast/expression/LValue.h"
#include "ast/expression/Expression.h"
#include "ast/statement/assignment/NonBlocking.h"

NonBlocking::NonBlocking(const Position& position, LValue* const left, Expression* const right): Assignment(position, left, right){}

NonBlocking::NonBlocking(const NonBlocking& assignment): Assignment(assignment){}


void NonBlocking::execute() const {

}

void NonBlocking::code_gen() const {

}
