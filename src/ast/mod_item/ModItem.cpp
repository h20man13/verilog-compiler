#include "ast/mod_item/ModItem.h"


ModItem::ModItem(const Position& position): position(position){}

const Position ModItem::get_position() const {
	return position;
}
