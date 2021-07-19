#include "ast/statement/if/IfElse.h"

IfElse::~IfElse() {
	delete check;
	delete if_statement;
	delete else_statement;
}

IfElse::IfElse(const Position &position, Expression *const check, Statement *const if_statement, Statement *const else_statement) : If(position, check, if_statement), else_statement(else_statement) {}

IfElse::IfElse(const IfElse& if_stat): If(if_stat), else_statement(if_stat.else_statement){}

void IfElse::code_gen() const {

}

/**
 *
 * The execute method is used to interpret statements
 * @return None
 */

void IfElse::execute() const {

}
