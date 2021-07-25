#include "ast/expression/Slice.h"
#include <list>



Slice::Slice(const Position &position, const std::string &lexeme, Expression *const begin, Expression *const end) : LValue(position), Expression(position), lexeme(lexeme), begin(begin), end(end) {}

Slice::Slice(const Slice &slice) : LValue(slice), Expression(slice), lexeme(slice.lexeme), begin(slice.begin), end(slice.end) {
}

void Slice::code_gen() const {
	//TODO -- generate llvm IR
}

ObjBase* const Slice::evaluate() {
	//TODO -- evaluate the expression
	return NULL;
}

Slice::~Slice() {
	delete begin;
	delete end;
}


