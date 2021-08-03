#include "ast/expression/Concatenation.h"
#include <list>

Concatenation::Concatenation(const Position &position, const std::list<Expression* const> concat_list, SymbolTable* const table) : LValue(table), AstNode(position){
	for(std::list<Expression* const>::const_iterator it = concat_list.begin(); it != concat_list.end(); it++){
		this->concat_list.push_back(*it);
	}
}

Concatenation::Concatenation(const Concatenation& concatenation): LValue(concatenation), AstNode(concatenation){
	for(std::list<Expression* const>::const_iterator it = concatenation.concat_list.begin(); it != concatenation.concat_list.end(); it++){
		this->concat_list.push_back(*it);
	}
}

Concatenation::~Concatenation(){
	while(!concat_list.empty()){ //remove all expressions
		Expression* const exp = concat_list.front();
		concat_list.pop_front();
		delete exp;
	}
}

void Concatenation::code_gen() const {
	//TODO -- generate llvm code
}

ObjBase* const Concatenation::evaluate() {
	return NULL;
}

