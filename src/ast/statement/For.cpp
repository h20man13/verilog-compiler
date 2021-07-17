

#include "common/Position.h"
#include "common/types/ObjBase.h"
#include "ast/statement/For.h"



For::~For() {
	delete init;
	delete check;
	delete incriment;
	delete body;
}

For::For(const Position &position, Statement *const init, Expression *const check, Statement *const incriment, Statement *const body) : Statement(position), init(init), check(check), incriment(incriment), body(body) {}

void For::code_gen() const {

}

void For::execute() const {

}




