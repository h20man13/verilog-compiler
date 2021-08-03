#include "ast/mod_item/declaration/net/VectorDeclaration.h"

VectorDeclaration::VectorDeclaration(ConstantExpression* const start, ConstantExpression* const end): start(start), end(end){}

VectorDeclaration::VectorDeclaration(const VectorDeclaration& declaration): start(declaration.start), end(declaration.end){}

VectorDeclaration::~VectorDeclaration(){
	delete start;
	delete end;
}
