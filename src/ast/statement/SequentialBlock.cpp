#include "ast/statement/SequentialBlock.h"


SequentialBlock::~SequentialBlock(){
	while(!statement_list.empty()){
		Statement* const statement = *(statement_list.begin());
		statement_list.pop_front();
		delete statement;
	}
}

SequentialBlock::SequentialBlock(const Position& position, std::list<Statement* const> statement_list): Statement(position){
	for(std::list<Statement* const>::const_iterator it = statement_list.begin(); it != statement_list.end(); it++){
		this->statement_list.push_back(*it);
	}
}


void SequentialBlock::code_gen() const{

}

void SequentialBlock::execute() const{

}
