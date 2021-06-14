#ifndef LEXER_H
#define LEXER_H

#include "common/Position.h"
#include "common/ErrorLog.h"
#include "common/Error.h"
#include "common/Source.h"
#include "Token.h"

#include <list>
#include <optional>

/**
 * The Lexer class generates a Lexer capable of Tokenizing the Verilog language
 */
class Lexer {
private:
	ErrorLog error_log; //stores the error log assigned to the lexer
	std::optional<Source> source; //the file the lexer needs to lex
	const std::optional<const Token> gen_token(); //generates a single token
	const std::optional<const Token> parse_NumWrap(); //generates a single NumWrap
	const std::optional<const Token> parse_string(); //generates a string token
	const std::optional<const Token> parse_identifier(); //generates a identifier token
	const std::optional<const Token> parse_operator(); //generates an operator token
	const std::optional<const Token> parse_macro(); //generates a macro token like `define or `<any identifier>

	void parse_error(); //skips all tokens until the next token can be found
	void parse_multiple_line_comment(); //skips a multiple line comment
	void parse_single_line_comment(); //skips a single line comment

	const std::optional<const std::string> parse_binary(); //generates a binary NumWrap token
	const std::optional<const std::string> parse_octal(); //generates an octal NumWrap token
	const std::optional<const std::string> parse_hexidecimal(); //generates a hexadecimal token
	const std::optional<const std::string> parse_decimal(); //generates a decimal token
	const std::optional<const std::string> parse_real(); //generates a real token

public:
	/**
	 * THe default constructor takes in an error log and generates a Lexer capable of Tokenizing a Verilog file
	 * @param error_log
	 */
	Lexer(const ErrorLog &error_log);

	/**
	 * THe default constructor takes in an error log and generates a Lexer capable of Tokenizing a Verilog file
	 * @param error_log an error log to print to when the Lexer encounters an error
	 */
	void attach_source(const Source &source);

	/**
	 * generates a list of tokens from the given source
	 * @return the list of tokens generated from the source
	 */
	std::list<const Token> gen_tokens();
};

#endif
