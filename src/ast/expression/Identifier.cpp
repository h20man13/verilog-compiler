#include "ast/expression/Identifier.h"
#include "Token.h"

Identifier::Identifier(const Token& tok): Expression(tok.get_position()), lexeme(tok.get_lexeme()) {}

Identifier::Identifier(const Identifier& identifier): Expression(identifier.get_position()), lexeme(identifier.lexeme) {}

void Identifier::code_gen() const{
	//TODO -- code gen function to generate LLVM bytecode
}

ObjBase* const Identifier::evaluate(){
	return NULL;
}
