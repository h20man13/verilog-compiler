#include "main/parser/Parser.h"

Parser::Parser(const ErrorLog& error_log, std::list<const Token> &token_list): error_log(error_log){}

Parser::Parser(const Parser& parser): error_log(parser.error_log), token_list(token_list){}

const Position Parser::get_start() const {
	if(!token_list.empty()){
		return (*token_list.begin()).get_position();
	} else {
		return Position(~0, ~0);
	}
}

