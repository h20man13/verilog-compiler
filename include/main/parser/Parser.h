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
#include "ast/File.h"

class Parser{
protected:
	ErrorLog error_log;
	std::list<const Token> token_list;
	virtual ~Parser() = 0;
	Parser(const ErrorLog& error_log, std::list<const Token> &token_list);
	Parser(const Parser& parser);
	const Position get_start() const;
public:
	virtual Expression* const parse_expression() = 0;
	virtual Statement* const parse_statement() = 0;
	virtual ModItem* const parse_mod_item() = 0;
	virtual Module*  const parse_module() = 0;
	virtual File*  const parse_file() = 0;
};



#endif /* INCLUDE_MAIN_PARSER_PARSER_H_ */
