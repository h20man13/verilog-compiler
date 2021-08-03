#include "ast/expression/Index.h"

Index::Index(const Position& position, const std::string& lexeme, Expression* const index, SymbolTable* const table): AstNode(position), LValue(table), lexeme(lexeme), index(index){}

void Index::code_gen() const{
	//TODO -- generate llvm code here
}

ObjBase* const Index::evaluate(){
	return NULL;
}

SymbolTable::attribute Index::get_attribute_type() const{
	return SymbolTable::ARRAY;
}

const std::string Index::get_symbol_name() const{
	return lexeme;
}

Index::~Index(){
	delete index;
}

