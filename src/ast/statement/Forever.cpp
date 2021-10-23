#include "common/Position.h"
#include "OO-Types/include/Object.h"
#include "ast/expression/Expression.h"
#include "ast/statement/Forever.h"



Forever::~Forever() {
	delete statement;
}

Forever::Forever(const Position &position, Statement *const statement) : Statement(position), statement(statement){}

Forever::Forever(const Forever& stat): Statement(stat.get_position()), statement(stat.statement){}

void Forever::code_gen() const {

}

void Forever::execute() const {

}
