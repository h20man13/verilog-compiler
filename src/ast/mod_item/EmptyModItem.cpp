#include "ast/mod_item/EmptyModItem.h"

EmptyModItem::EmptyModItem(): ModItem(*(const Position*)NULL){}

EmptyModItem::~EmptyModItem(){}

void EmptyModItem::code_gen() const{

}
void EmptyModItem::perform() const{

}
