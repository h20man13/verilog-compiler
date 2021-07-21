#include "ast/mod_item/declaration/net/ScalarDeclaration.h"

ScalarDeclaration::ScalarDeclaration(const Position& position): Declaration(position){}

ScalarDeclaration::ScalarDeclaration(const ScalarDeclaration& declaration): Declaration(declaration.get_position()){}
