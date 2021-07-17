#include "ast/expression/LValue.h"
#include "ast/expression/Expression.h"
#include "ast/statement/Statement.h"
#include "ast/statement/assignment/Assignment.h"


Assignment::Assignment(const Position &position, LValue *const left,
		Expression *const right) :
		Statement(position), left(left), right(right) {
}

Assignment::~Assignment() {
	delete left;
	delete right;
}



