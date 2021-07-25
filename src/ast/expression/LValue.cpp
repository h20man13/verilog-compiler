#include "ast/expression/LValue.h"

LValue::LValue(const Position& position): AstNode(position){}

LValue::LValue(const LValue& lvalue): AstNode(lvalue.get_position()){}

