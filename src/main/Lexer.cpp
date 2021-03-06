#include "main/Lexer.h"
#include "common/Position.h"
#include "common/ErrorLog.h"

#include <string>
#include <cctype>
#include <optional>

/**
 * THe default constructor takes in an error log and generates a Lexer capable of Tokenizing a Verilog file
 * @param error_log
 */
Lexer::Lexer(const ErrorLog &error_log) :
		error_log(error_log) {
	this->source = std::nullopt;
}

/**
 * THe default constructor takes in an error log and generates a Lexer capable of Tokenizing a Verilog file
 * @param error_log an error log to print to when the Lexer encounters an error
 */
void Lexer::attach_source(const Source &source) {
	this->source = { source };
}

const std::optional<const Token> Lexer::gen_token() {
	while (!source->eof()) {
		char c = source->current();
		switch (c) {
		case '\n':
			source->advance();
			continue;
		case ' ':
			source->advance();
			continue;
		case '\t':
			source->advance();
			continue;
		case '`':
			return parse_macro();
		case '\'':
			return parse_NumWrap();
		case '\"':
			return parse_string();
		case '/':
			if (source->next() == '/') {
				parse_single_line_comment();
				continue;
			} else if (source->next() == '*') {
				parse_multiple_line_comment();
				continue;
			} // @suppress("No break at end of case")
		default:
			if (is_operator(c))
				return parse_operator();
			else if (isalpha(c))
				return parse_identifier();
			else if (isdigit(c))
				return parse_NumWrap();
			Error error("Unexpected initial token found ",
					source->get_current_position());
			error_log.add(error);
			parse_error();
			return std::nullopt;
		}
	}
	return std::nullopt;
}

const std::optional<const Token> Lexer::parse_identifier() {
	Position pos(source->get_current_position());
	char c = source->current();
	std::string lexeme;
	while ((c == '_' || isalpha(c) || isdigit(c)) && !source->eof()) {
		lexeme += c;
		source->advance();
		c = source->current();
	}
	return {Token::make_identifier_token(lexeme, pos)};
}

const std::optional<const Token> Lexer::parse_macro() {
	Position pos(source->get_current_position());
	char c = source->current();
	std::string lexeme;
	lexeme += c; // add '`' to lexeme
	source->advance();
	c = source->current();
	if (c != '_' && !isalpha(c)) {
		parse_error();
		return std::nullopt;
	}
	while ((c == '_' || isalpha(c) || isdigit(c)) && !source->eof()) {
		lexeme += c;
		source->advance();
		c = source->current();
	}

	if (lexeme == "`") {
		Error err("No identifier found for macro definition", pos);
		error_log.add(err);
		return std::nullopt;
	}

	return {Token::make_macro_token(lexeme, pos)};
}

const std::optional<const Token> Lexer::parse_string() {
	Position pos(source->get_current_position());
	std::string lexeme;
	char c = source->current();
	lexeme += c;
	source->advance();
	c = source->current();
	while (c != '\"') {
		if (c == '/' && source->next() == '*') {
			parse_multiple_line_comment();
			c = source->current(); //update c after current changed in function
		} else if (source->eof()) {
			Error error("Unexpected end of file while parsing string", pos);
			error_log.add(error);
			parse_error();
			return std::nullopt;
		} else {
			source->advance();
			lexeme += c;
		}
	}
	c = source->current();
	lexeme += c;
	source->advance();
	return {Token::make_string_token(lexeme, pos)};
}

void Lexer::parse_single_line_comment() {
	source->advance(2); // advance past the double / ie // or actually //// with escape characters included
	char c = source->current();
	while (c != '\n' && !source->eof()) {
		source->advance();
		c = source->current();
	}
	source->advance();
}

void Lexer::parse_multiple_line_comment() {
	Position pos(source->get_current_position());
	source->advance(2); // advance past the double / ie /*
	char c = source->current();
	while (c != '*' && source->next() != '/') {
		if (source->eof()) {
			Error err("Unterminated comment found at eof", pos);
			error_log.add(err);
		}
		source->advance();
		c = source->current();
	}
	source->advance(2); //skip over */ ending
}

const std::optional<const Token> Lexer::parse_operator() {
	Position pos(source->get_current_position());
	char c = source->current();
	std::string lexeme;
	if (c == '<') {
		lexeme += c;
		if (source->next() == '=' || source->next() == '<') {
			lexeme += source->next();
			source->advance(2);
		} else {
			source->advance();
		}
	} else if (c == '>') {
		lexeme += c;
		if (source->next() == '=' || source->next() == '>') {
			lexeme += source->next();
			source->advance(2);
		} else {
			source->advance();
		}
	} else if (c == '!') {
		lexeme += c;
		if (source->next() == '=') {
			lexeme += source->next();
			source->advance(2);
			if (source->current() == '=') {
				lexeme += source->current();
				source->advance();
			}
		} else {
			source->advance();
		}
	} else if (c == '~') {
		lexeme += c;
		if (source->next() == '|' || source->next() == '&'
				|| source->next() == '^') {
			lexeme += source->next();
			source->advance(2);
		} else {
			source->advance();
		}
	} else if (c == '=') {
		lexeme += c;
		if (source->next() == '=') {
			lexeme += source->next();
			source->advance(2);
			if (source->current() == '=') {
				lexeme += source->current();
				source->advance();
			}
		} else {
			source->advance();
		}
	} else if (c == '&') {
		if (source->next() == '&') {
			lexeme = lexeme + source->current() + source->next();
			source->advance(2);
		} else {
			lexeme += source->current();
			source->advance();
		}
	} else if (c == '|') {
		if (source->next() == '|') {
			lexeme = lexeme + source->current() + source->next();
			source->advance(2);
		} else {
			lexeme += source->current();
			source->advance();
		}
	} else if (c == '^') {
		if (source->next() == '~') {
			lexeme = lexeme + source->current() + source->next();
			source->advance(2);
		} else {
			lexeme += source->current();
			source->advance();
		}
	} else {
		lexeme += c;
		source->advance();
	}
	return {Token::make_operator_token(lexeme, pos)};
}

void Lexer::parse_error() {
	char c = source->current();
	while (!isspace(c) && c != '\n' && !source->eof()) {
		source->advance();
		c = source->current();
	}
}

const std::optional<const std::string> Lexer::parse_real() {
	char c = source->current();
	std::string lexeme;
	lexeme += c;
	source->advance();
	c = source->current();
	while (isdigit(c)) {
		lexeme += c;
		source->advance();
		c = source->current();
	}

	if (!isspace(c)) {
		Error error("Unexpected real literal found ",
				source->get_current_position());
		error_log.add(error);
		parse_error();
		return std::nullopt;
	}

	return {lexeme};
}

const std::optional<const Token> Lexer::parse_NumWrap() {
	char c = source->current();
	Position pos(source->get_current_position());
	std::string lexeme;

	while (isdigit(c)) {
		lexeme += c;
		source->advance();
		c = source->current();
	}

	if (c != '\'' && c != '.') {
		return Token::make_number_token(lexeme, pos); //return default decimal value 1 20 1000 etc ...
	} else if (c == '.') {
		const std::optional<const std::string> str = Lexer::parse_real();
		if (!str)
			return std::nullopt;
		else
			return Token::make_number_token(lexeme + *str, pos);
	} else {

		lexeme += c;
		source->advance();
		c = source->current();

		if (toupper(c) == 'H') {
			const std::optional<std::string> str = parse_hexidecimal();
			if (!str) {
				return std::nullopt;
			} else {
				return {Token::make_number_token(lexeme + *str, pos)};
			}
		} else if (toupper(c) == 'B') {
			const std::optional<std::string> str = parse_binary();
			if (!str) {
				return std::nullopt;
			} else {
				return {Token::make_number_token(lexeme + *str, pos)};
			}
		} else if (toupper(c) == 'D') {
			std::optional<std::string> str = parse_decimal();
			if (!str) {
				return std::nullopt;
			} else {
				return {Token::make_number_token(lexeme + *str, pos)};
			}
		} else if (toupper(c) == 'O') {
			std::optional<std::string> str = parse_octal();
			if (!str) {
				return std::nullopt;
			} else {
				return {Token::make_number_token(lexeme + *str, pos)};
			}
		} else {
			Error error(
					"Character representing hex, binary, decimal and octal missing",
					pos);
			error_log.add(error);
			parse_error();
			return std::nullopt;
		}
	}
}

static const bool isoctal(char c) {
	return '0' <= c && c <= '7';
}

const std::optional<const std::string> Lexer::parse_octal() {
	char c = source->current();
	std::string lexeme;
	while (isoctal(c)) {
		lexeme += c;
		source->advance();
		c = source->current();
	}

	if (!isspace(c)) {
		Error error("Unexpected octal literal found ",
				source->get_current_position());
		error_log.add(error);
		parse_error();
		return std::nullopt;
	}

	return {lexeme};
}

const std::optional<const std::string> Lexer::parse_hexidecimal() {
	char c = source->current();
	std::string lexeme;
	while (isxdigit(c)) {
		lexeme += c;
		source->advance();
		c = source->current();
	}
	if (!isspace(c)) {
		Error error("Unexpected hexidecimnal literal found ", source->get_current_position());
		error_log.add(error);
		parse_error();
		return std::nullopt;
	}
	return {lexeme};
}

const std::optional<const std::string> Lexer::parse_decimal() {
	char c = source->current();
	std::string lexeme;
	while (isdigit(c)) {
		lexeme += c;
		source->advance();
		c = source->current();
	}
	if (!isspace(c)) {
		Error error("Unexpected hexidecimnal literal found ", source->get_current_position());
		error_log.add(error);
		parse_error();
		return std::nullopt;
	}
	return {lexeme};
}

const static bool isbinary(char c) {
	return c == '0' || c == '1' || toupper(c) == 'X' || toupper(c) == 'Z';
}

const std::optional<const std::string> Lexer::parse_binary() {
	char c = source->current();
	std::string lexeme;
	while (isbinary(c)) {
		lexeme += c;
		source->advance();
		c = source->current();
	}
	if (!isspace(c)) {
		Error error("Unexpected binary literal found ", source->get_current_position());
		error_log.add(error);
		parse_error();
		return std::nullopt;
	}
	return {lexeme};
}

/**
 * generates a list of tokens from the given source
 * @return the list of tokens generated from the source
 */
std::list<const Token> Lexer::gen_tokens() {
	std::list<const Token> tokens;
	while (!source->eof()) {
		const std::optional<const Token> tok = gen_token();
		if (tok) {
			tokens.push_back(*tok);
		}
	}
	return tokens;
}
