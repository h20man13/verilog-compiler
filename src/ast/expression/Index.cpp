#include "ast/expression/Index.h"

Index::Index(const Position& position, const std::string& lexeme, Expression* const index): Expression(position), lexeme(lexeme), index(index){}

void Index::code_gen() const{
	//TODO -- generate llvm code here
}

ObjBase* const Index::evaluate(){
	return NULL;
}

Index::~Index(){
	delete index;
}

