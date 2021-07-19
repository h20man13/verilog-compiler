#include "common/Position.h"
#include "ast/statement/Statement.h"

Statement::Statement(const Position& position): position(position){}

Statement::Statement(const Statement& stat): position(stat.get_position()){}

const Position Statement::get_position() const {
	return position;
}

