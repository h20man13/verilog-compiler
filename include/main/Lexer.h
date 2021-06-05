#ifndef LEXER_H
#define LEXER_H

#include "common/Position.h"
#include "common/ErrorLog.h"
#include "common/Error.h"
#include "common/Source.h"
#include "Token.h"

#include <list>
#include <optional>

class Lexer{
private:
  ErrorLog error_log;
  std::optional<Source> source;
  const std::optional<const Token> gen_token();
  const std::optional<const Token> parse_number();
  const std::optional<const Token> parse_string();
  const std::optional<const Token> parse_identifier();
  const std::optional<const Token> parse_operator();
  const std::optional<const Token> parse_macro();
  
  void parse_error();
  void parse_multiple_line_comment();
  void parse_single_line_comment();

  const std::optional<const std::string> parse_binary();
  const std::optional<const std::string> parse_octal();
  const std::optional<const std::string> parse_hexidecimal();
  const std::optional<const std::string> parse_decimal();
  const std::optional<const std::string> parse_real();
  
public:
  Lexer(const ErrorLog& error_log);
  void attach_source(const Source& source);
  std::list<const Token> gen_tokens();
};

#endif
