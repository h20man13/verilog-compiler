#include "ast/mod_item/InitialStatement.h"


InitialStatement::InitialStatement(const Position& position, Statement* const statement): ModItem(position), statement(statement){}
InitialStatement::InitialStatement(const InitialStatement& statement): ModItem(statement.get_position()), statement(statement.statement){}

InitialStatement::~InitialStatement(){
	delete statement;
}

void InitialStatement::perform() const{

}

void InitialStatement::code_gen() const{

}
