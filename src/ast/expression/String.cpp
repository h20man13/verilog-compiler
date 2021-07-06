#include "ast/expression/String.h"
#include "Token.h"

String::String(const Token &tok): Expression(tok.get_position()), lexeme(tok.get_lexeme()) {}

String::String(const String& str): Expression(str.get_position()), lexeme(str.lexeme) {}

void String::code_gen() const {
	//TODO -- emit llvm IR
}

ObjBase* const String::evaluate() {
	return NULL;
}
