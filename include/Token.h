#ifndef TOKEN_H
#define TOKEN_H

#include <string>
#include "common/Position.h"

/**
 * Tok enum represents all of the possible token types of the verilog language
 */
enum tok{
  IDENTIFIER, //identifiers
  NUMBER, //NumWraps
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
  SEMI,   //= 0;
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
  ALWAYS,
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
  OR,
  NOR,
  NAND,
  AND,
  XOR,
  XNOR,
  NOT
};

  
class Token{
 private:
  const std::string lexeme;
  const tok type;
  const Position position;
  Token(const tok type, const std::string& lexeme, const Position& position);

 public:

  /**
   *@param None
   *@return The position of the first letter of the lexeme representing the token 
   */
  const Position get_position() const;

  /**
   *@param None
   *@return The Type (this is represented as an int from the tok::enum)
   */
  const tok get_type() const;

  /**
   *@param None
   *@return The lexeme or the literal text of the token 
   *(Ex: the text for a token of type LT is "<")
   */
  const std::string get_lexeme() const;

  /**
   *@param None
   *@return A text that displays all of the characteristics of a Token
   *(Ex: the text for a token of type LT is "<")
   */
  const std::string to_string() const;


  
/**
 * Creates a token representing a NumWrap in the verilog language
 * @param lexeme string you want representing the NumWrap 1, 4, 'b1101010 etc...
 * @param position the position of the current Token
 * @return Token of the type NumWrap
 */
  static const Token make_NumWrap_token(const std::string& lexeme, const Position& position);


  
/**
 * Creates a token representing a identifier or a keyword in the verilog language
 * @param lexeme string you want representing the identifier var, a, while etc.. if this token is equal to one of the keywords in the verilog language it will return that instead
 * @param position the position of the current Token
 * @return Token of the type IDENTIFIER or WHILE, IF, (other keywords) ...
 */
  
  static const Token make_identifier_token(const std::string& lexeme, const Position& position);


  
/**
 * Creates a token representing a macro or an identifier for a macro in the verilog language
 * @param lexeme string you want representing the indentifier `var, `a, `define etc.. if this token is equal to one of the keywords in the verilog language it will return that instead
 * @param position the position of the current Token
 * @return Token of the type MACROIDENTIFIER or MACRODEF, (other keywords) ...
 */
  
  static const Token make_macro_token(const std::string& lexeme, const Position& position);

/**
 * Creates a token representing a string in the verilog language
 * @param lexeme string you want the token to represent "1" "4", "'b1101010" etc...
 * @param position position of the current Token
 * @return Token of the type STRING
 */
  
  static const Token make_string_token(const std::string& lexeme, const Position& position);

/**
 * Creates a token representing an operator in the verilog language
 * @param lexeme string you want the token to represent * % << + - || etc...
 * @param position position of the current Token
 * @return Token of the type OPERATOR
 */
  static const Token make_operator_token(const std::string& lexeme, const Position& position);
  
};

/**
 * The is_operator function is used to check whether a character or a string is an operator
 * @param lexeme string you want to use to check if the operator exists in the verilog language
 */
const bool is_operator(const std::string& lexeme);

/**
 * The is_operator function is used to check whether a character or a string is an operator
 * @param lexeme char you want to use to check if the operator exists in the verilog language
 */
const bool is_operator(const char lexeme);

/**
 * The type_to_string function is used to get a string equivalent of the type only. This is needed so that the Types dont just print out NumWraps because type is an enum.
 * @param lexeme char you want to use to check if the operator exists in the verilog language
 * @return std::string a string representing the NumWrap passed in to it
 */
const std::string type_to_string(const tok str);

#endif
