#ifndef EMPTY_MOD_ITEM_H
#define EMPTY_MOD_ITEM_H

#include "common/Position.h"
#include "ast/mod_item/ModItem.h"

class EmptyModItem: public ModItem{
public:
	EmptyModItem(const Position& position);
	~EmptyModItem();

	void code_gen() const;
	void perform() const;
};


#endif
