#include "ast/statement/ReturnStatement.h"


ReturnStatement::ReturnStatement(const Position& position, LValue* const ident, Expression* const expression): Statement(position), ident(ident), expression(expression){}
ReturnStatement::ReturnStatement(const ReturnStatement& statement): Statement(statement.get_position()), ident(statement.ident), expression(statement.expression){}

void ReturnStatement::code_gen() const{

}

void ReturnStatement::execute() const{

}

