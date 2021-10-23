

#include "common/Position.h"
#include "OO-Types/include/Object.h"
#include "ast/statement/For.h"



For::~For() {
	delete init;
	delete check;
	delete incriment;
	delete body;
}

For::For(const Position &position, Blocking *const init, Expression *const check, Blocking *const incriment, Statement *const body) : Statement(position), init(init), check(check), incriment(incriment), body(body) {}

For::For(const For& stat): Statement(stat.get_position()), init(stat.init), check(stat.check), incriment(stat.incriment), body(stat.body){}

void For::code_gen() const {

}

void For::execute() const {

}




