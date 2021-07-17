#include "common/Position.h"
#include "ast/statement/Statement.h"

const Position Statement::get_position() const {
	return position;
}

