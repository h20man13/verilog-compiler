#ifndef MODITEM_H
#define MODITEM_H

#include "common/Position.h"

class ModItem{
private:
	Position position;
protected:
	virtual ~ModItem() = 0;
	ModItem(const Position& position);
public:
	const Position get_position() const;

	virtual void perform() const = 0;
	virtual void code_gen() const = 0;
};


#endif
