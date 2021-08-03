#ifndef MODINSTANTIATION_H
#define MODINSTANTIATION_H

#include "ast/mod_item/ModItem.h"
#include "ast/mod_item/ModInstance.h"
#include "ast/expression/Identifier.h"
#include <list>

class ModInstantiation: public ModItem{
private:
	Identifier* const ident;
	std::list<ModInstance* const> item_list;
public:
	ModInstantiation(const Position& position, Identifier* const ident, std::list<ModInstance* const> &item_list);
	ModInstantiation(const ModInstantiation& instance);
	~ModInstantiation();

	void code_gen() const;
	void perform() const;
};


#endif
