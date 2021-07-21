#include "ast/statement/assignment/Blocking.h"

Blocking::Blocking(const Position& position, LValue* const left, Expression* const right): ProceduralAssignment(position, left, right){}

Blocking::Blocking(const Blocking& assignment): ProceduralAssignment(assignment){}

void Blocking::execute() const {

}

void Blocking::code_gen() const {

}

