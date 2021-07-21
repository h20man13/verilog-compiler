#ifndef MODINSTANCE_H
#define MODINSTANCE_H

#include "common/Position.h"
#include "ast/expression/Identifier.h"
#include "ast/expression/Expression.h"
#include <list>

class ModInstance{
private:
	Identifier* const ident;
	std::list<Expression* const> exp_list;
public:
	ModInstance(Identifier* const ident, std::list<Expression* const> &exp_list);
	ModInstance(const ModInstance& instance);
	~ModInstance();

	Identifier* const get_identifier() const;
	std::list<Expression* const> get_exp_list() const;

};


#endif
