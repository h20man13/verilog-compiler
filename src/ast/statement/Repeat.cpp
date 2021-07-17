#include "ast/statement/Repeat.h"

Repeat::~Repeat(){
	delete check;
	delete statement;
}

Repeat::Repeat(const Position& position, Expression* const check, Statement* const statement): Statement(position), check(check), statement(statement){}

void Repeat::code_gen() const {

}

void Repeat::execute() const {

}
