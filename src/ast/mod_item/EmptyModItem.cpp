#include "ast/mod_item/EmptyModItem.h"

EmptyModItem::EmptyModItem(const Position& position): ModItem(position){}

EmptyModItem::~EmptyModItem(){}

void EmptyModItem::code_gen() const{

}
void EmptyModItem::perform() const{

}
