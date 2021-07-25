#include "ast/expression/Identifier.h"
#include "Token.h"

Identifier::Identifier(const Token& tok): Expression(tok.get_position()), LValue(tok.get_position()), lexeme(tok.get_lexeme()) {}

Identifier::Identifier(const Identifier& identifier): LValue(identifier), Expression(identifier), lexeme(identifier.lexeme) {}

void Identifier::code_gen() const{
	//TODO -- code gen function to generate LLVM bytecode
}

ObjBase* const Identifier::evaluate(){
	return NULL;
}

ObjBase* const Identifier::access() const{
	return NULL;
}
