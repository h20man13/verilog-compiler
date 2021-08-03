#include "Token.h"
#include "common/Position.h"

#include <unordered_map>
#include <string>
#include <iostream>
#include <vector>
#include <cstring>

static std::unordered_map<std::string, tok> keywords; //hashmap to store keywords tokens for Verilog language
static std::unordered_map<std::string, tok> operators; //hashmap to store operators
static std::vector<std::string> enum_strings; //vector to store string equivelent of all tokens

static const std::string to_upper_case(const std::string& lexeme){
  std::string str(lexeme);
  for(int i = 0; i < str.size(); i++){
    str[i] = toupper(str[i]);
  }
  return str;
}

const std::string type_to_string(const tok type){
  return enum_strings[type];
}

#define ADD_OPERATOR(text, symbol)								\
  do{															\
    operators[symbol] = text;									\
    if(enum_strings.empty() || enum_strings.back() != #text)	\
      enum_strings.push_back(#text);							\
  } while(false)

#define ADD_KEYWORD(text)										\
  do{															\
    keywords[#text] = text;										\
    if(enum_strings.empty() || enum_strings.back() != #text)	\
      enum_strings.push_back(#text);							\
  } while(false)

#define ADD_MISC(text)											\
  do{															\
    if(enum_strings.empty() || enum_strings.back() != #text)	\
      enum_strings.push_back(#text);							\
  } while(false)

struct TokDecl {
public:
	TokDecl() {

		ADD_MISC(IDENTIFIER);
		ADD_MISC(NUMBER);
		ADD_MISC(STRING);
		ADD_MISC(MACRODEFINITION);
		ADD_MISC(MACROINCLUSION);
		ADD_MISC(MACROIDENTIFIER);

		ADD_OPERATOR(LPAR, "(");
		ADD_OPERATOR(RPAR, ")");
		ADD_OPERATOR(RCURL, "}");
		ADD_OPERATOR(LCURL, "{");
		ADD_OPERATOR(RBRACK, "]");
		ADD_OPERATOR(LBRACK, "[");
		ADD_OPERATOR(COMMA, ",");
		ADD_OPERATOR(PLUS, "+");
		ADD_OPERATOR(MINUS, "-");
		ADD_OPERATOR(TIMES, "*");
		ADD_OPERATOR(MOD, "%");
		ADD_OPERATOR(DIV, "/");
		ADD_OPERATOR(QUEST, "?");
		ADD_OPERATOR(COLON, ":");
		ADD_OPERATOR(LT, "<");
		ADD_OPERATOR(GT, ">");
		ADD_OPERATOR(LE, "<=");
		ADD_OPERATOR(GE, ">=");
		ADD_OPERATOR(DELAY, "#");
		ADD_OPERATOR(SEMI, ";");
		ADD_OPERATOR(AT, "@");
		ADD_OPERATOR(DOLLAR, "$");
		ADD_OPERATOR(EQ1, "=");
		ADD_OPERATOR(EQ2, "==");
		ADD_OPERATOR(EQ3, "===");
		ADD_OPERATOR(NE1, "!=");
		ADD_OPERATOR(NE2, "!==");
		ADD_OPERATOR(LAND, "&&");
		ADD_OPERATOR(LOR, "||");
		ADD_OPERATOR(LNEG, "!");
		ADD_OPERATOR(BAND, "&");
		ADD_OPERATOR(BNEG, "~");
		ADD_OPERATOR(BOR, "|");
		ADD_OPERATOR(BXOR, "^");
		ADD_OPERATOR(BXNOR, "~^");
		ADD_OPERATOR(BXNOR, "^~");
		ADD_OPERATOR(BNOR, "~|");
		ADD_OPERATOR(BNAND, "~&");
		ADD_OPERATOR(LSHIFT, "<<");
		ADD_OPERATOR(RSHIFT, ">>");
		ADD_OPERATOR(PERIOD, ".");

		ADD_KEYWORD(INITIAL);
		ADD_KEYWORD(ALWAYS);
		ADD_KEYWORD(BEGIN);
		ADD_KEYWORD(END);
		ADD_KEYWORD(MODULE);
		ADD_KEYWORD(ENDMODULE);
		ADD_KEYWORD(TASK);
		ADD_KEYWORD(ENDTASK);
		ADD_KEYWORD(CASE);
		ADD_KEYWORD(ENDCASE);
		ADD_KEYWORD(FUNCTION);
		ADD_KEYWORD(ENDFUNCTION);
		ADD_KEYWORD(ASSIGN);
		ADD_KEYWORD(POSEGE);
		ADD_KEYWORD(NEGEGE);
		ADD_KEYWORD(IF);
		ADD_KEYWORD(ELSE);
		ADD_KEYWORD(WHILE);
		ADD_KEYWORD(FOREVER);
		ADD_KEYWORD(REPEAT);
		ADD_KEYWORD(FOR);
		ADD_KEYWORD(INTEGER);
		ADD_KEYWORD(REG);
		ADD_KEYWORD(REAL);
		ADD_KEYWORD(OUTPUT);
		ADD_KEYWORD(INPUT);
		ADD_KEYWORD(WAIT);
		ADD_KEYWORD(CASEZ);
		ADD_KEYWORD(CASEX);
		ADD_KEYWORD(DEFAULT);
		ADD_KEYWORD(WIRE);
		ADD_KEYWORD(OR);
		ADD_KEYWORD(NOR);
		ADD_KEYWORD(NAND);
		ADD_KEYWORD(AND);
		ADD_KEYWORD(XOR);
		ADD_KEYWORD(XNOR);
		ADD_KEYWORD(NOT);
	}
};

static const TokDecl t; //create this so the tokens are initialized; // @suppress("Unused variable declaration in file scope")

Token::Token(const tok type, const std::string &lexeme, const Position &position) : type(type), lexeme(lexeme), position(position) {}

/**
 * Creates a token representing a NumWrap in the verilog language
 * @param lexeme string you want representing the NumWrap 1, 4, 'b1101010 etc...
 * @param position the position of the current Token
 * @return Token of the type NumWrap
 */
const Token Token::make_number_token(const std::string &lexeme, const Position &position) {
	return Token(NUMBER, lexeme, position);
}

/**
 * Creates a token representing a string in the verilog language
 * @param lexeme string you want the token to represent "1" "4", "'b1101010" etc...
 * @param position position of the current Token
 * @return Token of the type STRING
 */

const Token Token::make_string_token(const std::string &lexeme, const Position &position) {
	return Token(STRING, lexeme, position);;
}

/**
 * Creates a token representing a identifier or a keyword in the verilog language
 * @param lexeme string you want representing the identifier var, a, while etc.. if this token is equal to one of the keywords in the verilog language it will return that instead
 * @param position the position of the current Token
 * @return Token of the type IDENTIFIER or WHILE, IF, (other keywords) ...
 */

const Token Token::make_identifier_token(const std::string &lexeme, const Position &position) {
	if (keywords.find(to_upper_case(lexeme)) != keywords.end()) {
		return Token(keywords[to_upper_case(lexeme)], lexeme, position);
	} else {
		return Token(IDENTIFIER, lexeme, position);
	}
}

/**
 * Creates a token representing a macro or an identifier for a macro in the verilog language
 * @param lexeme string you want representing the identifier `var, `a, `define etc.. if this token is equal to one of the keywords in the verilog language it will return that instead
 * @param position the position of the current Token
 * @return Token of the type MACROIDENTIFIER or MACRODEF, (other keywords) ...
 */

const Token Token::make_macro_token(const std::string &lexeme,
		const Position &position) {
	if (lexeme == "`define") {
		return Token(MACRODEFINITION, lexeme, position);
	} else if (lexeme == "`include") {
		return Token(MACROINCLUSION, lexeme, position);
	} else{
		return Token(MACROIDENTIFIER, lexeme, position);
	}
}

/**
 * Creates a token representing an operator in the verilog language
 * @param lexeme string you want the token to represent * % << + - || etc...
 * @param position position of the current Token
 * @return Token of the type OPERATOR
 */

const Token Token::make_operator_token(const std::string &lexeme, const Position &position) {
	Token tok(operators[lexeme], lexeme, position);
	return tok;
}

/**
 * Gets the position of the token
 * @return the position of the token object @see include/common/Position.h
 */

const Position Token::get_position() const {
	return position;
}

/**
 * Gets the actual string found when creating the token
 * @return the lexeme representing the token (ex: "while")
 */

const std::string Token::get_lexeme() const {
	return lexeme;
}

/**
 * @return an enum representation of the token
 */

const tok Token::get_type() const {
	return type;
}

/**
 * @param None
 * @return a string representing the entire Token containing the position the string variant of the enum and the position
 */

const std::string Token::to_string() const {
	return "Token " + enum_strings[type] + " (" + lexeme + ") at " + position.to_string();
}

/**
 * checks to see if the string given is an operator in the operators hashmap
 * @param lexeme the current
 * @return if the operator was found in the hashmap
 */
const bool is_operator(const std::string &lexeme) {
	return operators.find(lexeme) != operators.end();
}

/**
 * This is a repetition of the is_operator function however this function takes in a character instead of a string
 * @param lexeme a char representing the current lexeme generated by the lexer
 * @return if the operator is found in the operator hashmap
 */
const bool is_operator(const char lexeme) {
	const std::string str(1, lexeme);
	return is_operator(str);
}

