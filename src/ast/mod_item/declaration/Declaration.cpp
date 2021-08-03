#include "ast/mod_item/declaration/Declaration.h"

Declaration::Declaration(const Position& position, SymbolTable* const table): ModItem(position), table(table){}

Declaration::Declaration(const Declaration& declaration): ModItem(declaration), table(declaration.table){}
