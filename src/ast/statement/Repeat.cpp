#include "ast/statement/Repeat.h"

Repeat::~Repeat(){
	delete times;
	delete statement;
}

Repeat::Repeat(const Position& position, ConstantExpression* const times, Statement* const statement): Statement(position), times(times), statement(statement){}

Repeat::Repeat(const Repeat& stat): Statement(stat.get_position()), times(stat.times), statement(stat.statement){}

void Repeat::code_gen() const {

}

void Repeat::execute() const {

}
