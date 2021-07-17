#include "ast/statement/While.h"

While::~While() {
	delete check;
	delete statement;
}

While::While(const Position &position, Expression *const check, Statement *const statement): Statement(position), check(check), statement(statement) {}

void While::code_gen() const {

}

void While::execute() const {

}
