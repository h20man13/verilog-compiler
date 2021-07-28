#include "ast/mod_item/declaration/UnidentifiedDeclaration.h"
#include <list>

UnidentifiedDeclaration::UnidentifiedDeclaration(const Position& position, Identifier* const ident): Declaration(position), ident(ident){}

UnidentifiedDeclaration::UnidentifiedDeclaration(const UnidentifiedDeclaration& declaration): Declaration(declaration), ident(declaration.ident){}

UnidentifiedDeclaration::~UnidentifiedDeclaration(){
	delete ident;
}

void UnidentifiedDeclaration::code_gen() const{

}

void UnidentifiedDeclaration::perform() const{

}
