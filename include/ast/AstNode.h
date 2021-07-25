#ifndef ASTNODE_H
#define ASTNODE_H

#include "common/Position.h"

class AstNode{
public:
	const Position get_position() const;
	virtual ~AstNode();
private:
	const Position position;
protected:
	AstNode(const Position& position);
	AstNode(const AstNode& node);
};



#endif /* INCLUDE_AST_ASTNODE_H_ */
