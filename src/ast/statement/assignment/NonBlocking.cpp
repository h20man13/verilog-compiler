#include "ast/expression/LValue.h"
#include "ast/expression/Expression.h"
#include "ast/statement/assignment/NonBlocking.h"

NonBlocking::NonBlocking(const Position& position, LValue* const left, Expression* const right, NonBlocking* const next): ProceduralAssignment(position, left, right), next(next){}

NonBlocking::NonBlocking(const NonBlocking& assignment): ProceduralAssignment(assignment), next(assignment.next){}


void NonBlocking::execute() const {

}

void NonBlocking::code_gen() const {

}
