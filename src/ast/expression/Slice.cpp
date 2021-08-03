#include "ast/expression/Slice.h"
#include <list>



Slice::Slice(const Position &position, const std::string &lexeme, Expression *const begin, Expression *const end, SymbolTable* const table) : LValue(table), AstNode(position), lexeme(lexeme), begin(begin), end(end) {}

Slice::Slice(const Slice &slice) : AstNode(slice), LValue(slice.table), lexeme(slice.lexeme), begin(slice.begin), end(slice.end) {}

void Slice::code_gen() const {
	//TODO -- generate llvm IR
}

ObjBase* const Slice::evaluate() {
	//TODO -- evaluate the expression
	return NULL;
}

SymbolTable::attribute Slice::get_attribute_type() const{
	return SymbolTable::ARRAY;
}

const std::string Slice::get_symbol_name() const{
	return lexeme;
}

Slice::~Slice() {
	delete begin;
	delete end;
}


