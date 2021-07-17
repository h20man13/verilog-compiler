#include "common/Position.h"
#include "common/types/ObjBase.h"
#include "ast/expression/Expression.h"
#include "ast/statement/Forever.h"



Forever::~Forever() {
	delete check;
	delete statement;
}

Forever::Forever(const Position &position, Expression *const check, Statement *const statement) : Statement(position), check(check), statement(statement) {

}

void Forever::code_gen() const {

}

void Forever::execute() const {

}
