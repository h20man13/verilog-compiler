#include "common/Position.h"
#include "ast/statement/Statement.h"

Statement::Statement(const Position& position): AstNode(position){}

Statement::Statement(const Statement& stat): AstNode(stat.get_position()){}

