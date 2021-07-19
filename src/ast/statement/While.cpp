#include "ast/statement/While.h"

While::While(const Position &position, Expression *const check, Statement *const statement): Statement(position), check(check), statement(statement) {}

While::While(const While& stat): Statement(stat.get_position()), check(stat.check), statement(stat.statement){}

While::~While() {
	delete check;
	delete statement;
}

void While::code_gen() const {

}

void While::execute() const {

}
