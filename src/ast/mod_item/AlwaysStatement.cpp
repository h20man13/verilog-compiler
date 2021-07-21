#include "ast/mod_item/AlwaysStatement.h"


AlwaysStatement::AlwaysStatement(const Position& position, Statement* const statement): ModItem(position), statement(statement){}
AlwaysStatement::AlwaysStatement(const AlwaysStatement& statement): ModItem(statement.get_position()), statement(statement.statement){}

AlwaysStatement::~AlwaysStatement(){
	delete statement;
}

void AlwaysStatement::perform() const{

}

void AlwaysStatement::code_gen() const{

}


