#include "Token.h"
#include "common/Position.h"
#include "test/TestUtils.h"

static bool op_not_found_test(){
  return !is_operator("~**");
}

static bool op_found_test(){
  return is_operator("^");
}

static bool is_keyword_test(){
  Position p(0, 0);
  std::string lexeme = "initial";
  Token t = Token::make_identifier_token(lexeme, p);
  return t.get_type() == tok::INITIAL;
}

static bool isnt_keyword_test(){
  Position p(0, 0);
  std::string lexeme = "coolio";
  Token t = Token::make_identifier_token(lexeme, p);
  return t.get_type() == IDENTIFIER;
}

static bool string_test(){
  Position p(0, 0);
  std::string lexeme = "\"string value\"";
  Token t = Token::make_string_token(lexeme, p);
  return t.get_type() == STRING;
}

static bool Number_test(){
  Position p(0, 0);
  std::string lexeme = "150000";
  Token t = Token::make_number_token(lexeme, p);
  return t.get_type() == NUMBER;
}

int main(){
  run_test(op_not_found_test);
  run_test(op_found_test);
  run_test(is_keyword_test);
  run_test(isnt_keyword_test);
  run_test(string_test);
  run_test(Number_test);
}
