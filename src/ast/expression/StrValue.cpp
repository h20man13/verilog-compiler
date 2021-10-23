#include "ast/expression/StrValue.h"
#include "Token.h"

StrValue::StrValue(const Token &tok): AstNode(tok.get_position()), lexeme(tok.get_lexeme()) {}

StrValue::StrValue(const StrValue& str): AstNode(str.get_position()), lexeme(str.lexeme) {}

void StrValue::code_gen() const {
	//TODO -- emit llvm IR
}

Object* const StrValue::evaluate() {
	return NULL;
}
