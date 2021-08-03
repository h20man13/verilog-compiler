#include "main/parser/Parser.h"

Parser::Parser(const ErrorLog& error_log, std::list<const Token> &token_list): error_log(error_log){
	for(std::list<const Token>::const_iterator it = token_list.begin(); it != token_list.end(); it++){
		this->token_list.push_back(*it);
	}
}

Parser::Parser(const Parser& parser): error_log(parser.error_log){
	for(std::list<const Token>::const_iterator it = parser.token_list.begin(); it != parser.token_list.end(); it++){
		this->token_list.push_back(*it);
	}
}

const Position Parser::get_start() const {
	if(!token_list.empty()){
		return (*token_list.begin()).get_position();
	} else {
		return Position(~0, ~0);
	}
}

