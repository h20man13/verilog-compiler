#ifndef MODITEM_H
#define MODITEM_H

#include "common/Position.h"
#include "ast/AstNode.h"

class ModItem: public AstNode{
protected:
	ModItem(const Position& position);
public:
	virtual ~ModItem() = 0;
	virtual void perform() const = 0;
	virtual void code_gen() const = 0;
};


#endif
