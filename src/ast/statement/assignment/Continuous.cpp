#include "ast/expression/LValue.h"
#include "ast/expression/Expression.h"
#include "ast/statement/assignment/Continuous.h"


Continuous::Continuous(const Position& position, LValue* const left, Expression* const right): Assignment(position, left, right){}

void Continuous::execute() const{

}

/**
 * The code gen method generates the LLVM ir for the statement
 */
void Continuous::code_gen() const{

}



