#include "ast/AstNode.h"

AstNode::AstNode(const Position& position): position(position){}

AstNode::AstNode(const AstNode& astnode): position(astnode.position){}

const Position AstNode::get_position() const{
	return position;
}
