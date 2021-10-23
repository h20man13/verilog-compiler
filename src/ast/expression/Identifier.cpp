#include "ast/expression/Identifier.h"
#include "Token.h"

Identifier::Identifier(const Token& tok, SymbolTable* const table): AstNode(tok.get_position()), LValue(table), lexeme(tok.get_lexeme()){}

Identifier::Identifier(const Identifier& identifier): AstNode(identifier), LValue(identifier.table),lexeme(identifier.lexeme) {}

SymbolTable::attribute Identifier::get_attribute_type() const{
	return SymbolTable::EMPTY;
}

const std::string Identifier::get_symbol_name() const{
	return lexeme;
}

void Identifier::code_gen() const{
	//TODO -- code gen function to generate LLVM bytecode
}

Object* const Identifier::evaluate(){
	return NULL;
}

Object* const Identifier::access() const{
	return NULL;
}
