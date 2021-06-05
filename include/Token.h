#ifndef TOKEN_H
#define TOKEN_H

#include <string>
#include "common/Position.h"


enum tok{
  IDENTIFIER, //identifiers
  NUMBER, //Numbers
  STRING, //String constants
  MACRODEFINITION,
  MACROIDENTIFIER,
	    
  //Operators
  LPAR,   // (
  RPAR,   // )
  RCURL,  // }
  LCURL,  // {
  RBRACK, // ]
  LBRACK, // [
  COMMA,  // ,
  PLUS,   // +
  MINUS,  // -
  TIMES,  // *
  MOD,    // %
  DIV,    // /
  QUEST,  // ?
  COLON,  // :
  LT,     // <
  GT,     // >
  LE,     // <=
  GE,     // >=
  DELAY,  // #
  SEMI,   // ;
  AT,     // @
  DOLLAR, // $
  EQ1,    // =
  EQ2,    // ==
  EQ3,    // ===
  NE1,    // !=
  NE2,    // !==
  LAND,   // &&
  LOR,    // ||
  LNEG,   // !
  BAND,   // &
  BNEG,   // ~
  BOR,    // |
  BXOR,   // ^
  BXNOR,  // ^~ or ~^
  BNAND,  // ~&
  BNOR,   // ~|
  LSHIFT, // <<
  RSHIFT, // >>
  PERIOD, //.
	    
  //keywords
  INITIAL,
  ALLWAYS,
  BEGIN,
  END,
  MODULE,
  ENDMODULE,
  TASK,
  ENDTASK,
  CASE,
  ENDCASE,
  FUNCTION,
  ENDFUNCTION,
  ASSIGN,
  POSEGE,
  NEGEGE,
  OR,
  IF,
  ELSE,
  WHILE,
  FOREVER,
  REPEAT,
  FOR,
  INTEGER,
  REG,
  REAL,
  OUTPUT,
  INPUT,
  WAIT,
  CASEZ,
  CASEX,
  DEFAULT,
  WIRE,
  ORGATE,
  NORGATE,
  NANDGATE,
  ANDGATE,
  XORGATE,
  XNORGATE,
  NOTGATE
};

  
class Token{
 private:
  const std::string lexeme;
  const tok type;
  const Position position;
  Token(const tok type, const std::string& lexeme, const Position& position);

 public:
  const Position get_position() const;
  const tok get_type() const;
  const std::string get_lexeme() const;
  const std::string to_string() const;
  
  static const Token make_number_token(const std::string& lexeme, const Position& position);
  static const Token make_identifier_token(const std::string& lexeme, const Position& position);
  static const Token make_macro_token(const std::string& lexeme, const Position& position);
  static const Token make_string_token(const std::string& lexeme, const Position& position);
  static const Token make_operator_token(const std::string& lexeme, const Position& position);
  
};

const bool is_operator(const std::string& lexeme);
const bool is_operator(const char lexeme);

const std::string type_to_string(const tok str);

#endif
