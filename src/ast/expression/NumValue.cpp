

#include "ast/expression/NumValue.h"
#include "Token.h"

NumValue::NumValue(const Token &tok) : AstNode(tok.get_position()), lexeme(tok.get_lexeme()) {}

void NumValue::code_gen() const {
	//TODO -- add llvm ir code here
}

Object* const NumValue::evaluate() {
	return NULL;
}

