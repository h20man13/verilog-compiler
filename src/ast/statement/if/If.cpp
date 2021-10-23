#include "common/Position.h"
#include "OO-Types/include/Object.h"
#include "ast/statement/if/If.h"


If::~If(){
	delete check;
	delete if_statement;
}


If::If(const Position &position, Expression *const check, Statement *const if_statement): Statement(position), check(check), if_statement(if_statement){}

If::If(const If& if_stat): Statement(if_stat.get_position()), check(if_stat.check), if_statement(if_stat.if_statement){}

void If::code_gen() const {

}


void If::execute() const {

}
