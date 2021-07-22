#ifndef ASTNODE_H
#define ASTNODE_H

#include "common/Position.h"

class AstNode{
private:
	const Position position;
protected:
	AstNode(const Position& position);
	AstNode(const AstNode& node);
public:
	const Position get_position() const;
};



#endif /* INCLUDE_AST_ASTNODE_H_ */
