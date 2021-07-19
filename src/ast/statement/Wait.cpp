#include "ast/statement/Wait.h"

Wait::~Wait(){
	delete check;
	delete statement;
}

Wait::Wait(const Position& position, Expression* const check, Statement* const statement): Statement(position), check(check), statement(statement){}

Wait::Wait(const Wait& wait): Statement(wait.get_position()), check(wait.check), statement(wait.statement){}


void Wait::code_gen() const{

}

void Wait::execute() const{

}


