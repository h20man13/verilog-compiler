#include "ast/mod_item/declaration/net/VectorDeclaration.h"

VectorDeclaration::VectorDeclaration(const Position& position, const Expression* start, const Expression* end): Declaration(position), start(start), end(end){}

VectorDeclaration::VectorDeclaration(const VectorDeclaration& declaration): Declaration(declaration.get_position()), start(declaration.start), end(declaration.end){}

VectorDeclaration::~VectorDeclaration(){
	delete start;
	delete end;
}
