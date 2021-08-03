#ifndef ASTNODE_H
#define ASTNODE_H

#include "common/Position.h"
#include "common/types/ObjBase.h"

class AstNode{
public:
	const Position get_position() const;
protected:
	AstNode(const Position& position);
	AstNode(const AstNode& node);
	virtual ~AstNode();
	const Position position;
};



#endif /* INCLUDE_AST_ASTNODE_H_ */
