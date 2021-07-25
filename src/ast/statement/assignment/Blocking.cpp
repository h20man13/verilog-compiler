#include "ast/statement/assignment/Blocking.h"

Blocking::Blocking(const Position& position, LValue* const left, Expression* const right): ProceduralAssignment(position), left(left), right(right){}

Blocking::Blocking(const Blocking& assignment): ProceduralAssignment(assignment), left(assignment.left), right(assignment.right){}

void Blocking::execute() const {

}

void Blocking::code_gen() const {

}

