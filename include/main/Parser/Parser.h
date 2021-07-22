/*
 * Parser.h
 *
 *  Created on: Jul 21, 2021
 *      Author: jacob
 */

#ifndef PARSER_H
#define PARSER_H

#include "common/ErrorLog.h"
#include "ast/expression/Expression.h"
#include "ast/mod_item/ModItem.h"
#include "ast/statement/Statement.h"
#include "ast/Module.h"

class Parser{
private:
	ErrorLog error_log;
protected:
	virtual ~Parser();
public:
	virtual static Expression* parse_expression() = 0;
	virtual static Statement* parse_statement() = 0;
	virtual static ModItem* parse_mod_item() = 0;
	virtual static Module* parse_module() = 0;
};



#endif /* INCLUDE_MAIN_PARSER_PARSER_H_ */
