

#include "ast/expression/NumValue.h"
#include "Token.h"

NumValue::NumValue(const Token &tok) :
		Expression(tok.get_position()), lexeme(tok.get_lexeme()) {
}

void NumValue::code_gen() const {
	//TODO -- add llvm ir code here
}

ObjBase* const NumValue::evaluate() {
	return NULL;
}

