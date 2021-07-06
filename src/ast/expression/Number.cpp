

#include "ast/expression/Number.h"
#include "Token.h"

Number::Number(const Token &tok) :
		Expression(tok.get_position()), lexeme(tok.get_lexeme()) {
}

void Number::code_gen() const {
	//TODO -- add llvm ir code here
}

ObjBase* const Number::evaluate() {
	return NULL;
}

