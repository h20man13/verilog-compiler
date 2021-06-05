#include "Token.h"
#include "common/Position.h"

#include <unordered_map>
#include <string>
#include <vector>
#include <cstring>

static std::unordered_map<std::string, tok> keywords;
static std::unordered_map<std::string, tok> operators;
static std::vector<std::string> enum_strings;

static std::string to_upper_case(const std::string& lexeme){
  std::string str(lexeme);
  for(int i = 0; i < str.size(); i++){
    str[i] = toupper(str[i]);
  }
  return str;
}

const std::string type_to_string(const tok type){
  return enum_strings[type];
}

#define ADD_OPERATOR(text, symbol)		\
  do{						\
    operators[symbol] = text;			\
    enum_strings.push_back(#text);		\
  } while(false)

#define ADD_KEYWORD(text)			\
  do{						\
    keywords[#text] = text;			\
    enum_strings.push_back(#text);		\
  } while(false)

#define ADD_MISC(text)				\
  do {						\
    enum_strings.push_back(#text);		\
  } while(false)

struct TokDecl{
public:
  TokDecl(){

    ADD_MISC(IDENTIFIER);
    ADD_MISC(NUMBER);
    ADD_MISC(STRING);
    ADD_MISC(MACRODEFINITION);
    ADD_MISC(MACROIDENTIFIER);

    ADD_OPERATOR(LPAR, "(");
    ADD_OPERATOR(RPAR, ")");
    ADD_OPERATOR(LCURL, "{");
    ADD_OPERATOR(RCURL, "(");
    ADD_OPERATOR(LBRACK, "[");
    ADD_OPERATOR(RBRACK, "]");
    ADD_OPERATOR(COMMA, ",");
    ADD_OPERATOR(PLUS, "+");
    ADD_OPERATOR(MINUS, "-");
    ADD_OPERATOR(TIMES, "*");
    ADD_OPERATOR(DIV, "/");
    ADD_OPERATOR(MOD, "%");
    ADD_OPERATOR(QUEST, "?");
    ADD_OPERATOR(COLON, ":");
    ADD_OPERATOR(LT, "<");
    ADD_OPERATOR(GT, ">");
    ADD_OPERATOR(GE, ">=");
    ADD_OPERATOR(LE, "<=");
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
    ADD_OPERATOR(BOR, "|");
    ADD_OPERATOR(BNEG, "~");
    ADD_OPERATOR(BXOR, "^");
    ADD_OPERATOR(BXNOR, "~^");
    ADD_OPERATOR(BXNOR, "^~");
    ADD_OPERATOR(BNOR, "~|");
    ADD_OPERATOR(BNAND, "~&");
    ADD_OPERATOR(LSHIFT, "<<");
    ADD_OPERATOR(RSHIFT, ">>");
    ADD_OPERATOR(PERIOD, ".");

    ADD_KEYWORD(INITIAL);
    ADD_KEYWORD(ALLWAYS);
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
    ADD_KEYWORD(OR);
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
    ADD_KEYWORD(ORGATE);
    ADD_KEYWORD(NORGATE);
    ADD_KEYWORD(NANDGATE);
    ADD_KEYWORD(ANDGATE);
    ADD_KEYWORD(XORGATE);
    ADD_KEYWORD(XNORGATE);
    ADD_KEYWORD(NOTGATE);
  }
};

static const TokDecl t; //create this so the tokens are initialized;


Token::Token(const tok type, const std::string& lexeme, const Position& position): type(type), lexeme(lexeme), position(position){}

const Token Token::make_number_token(const std::string& lexeme, const Position& position){
  Token tok(NUMBER, lexeme, position);
  return tok;
}

const Token Token::make_string_token(const std::string& lexeme, const Position& position){
  Token tok(STRING, lexeme, position);
  return tok;
}

const Token Token::make_identifier_token(const std::string& lexeme, const Position& position){
  if(keywords.find(to_upper_case(lexeme)) != keywords.end()){
    Token tok(keywords[to_upper_case(lexeme)], lexeme, position);
    return tok;
  } else {
    Token tok(IDENTIFIER, lexeme, position);
    return tok;
  }
}

const Token Token::make_macro_token(const std::string& lexeme, const Position& position){
  if(lexeme == "`define"){
    Token tok(MACRODEFINITION, lexeme, position);
    return tok;
  } else {
    Token tok(MACROIDENTIFIER, lexeme, position);
    return tok;
  }
}

const Token Token::make_operator_token(const std::string& lexeme, const Position& position){
  Token tok(operators[lexeme], lexeme, position);
  return tok;
}

const Position Token::get_position() const {
  return position;
}

const std::string Token::get_lexeme() const {
  return lexeme;
}

const tok Token::get_type() const {
  return type;
}

const std::string Token::to_string() const {
  return "Token " + enum_strings[type] + " (" + lexeme + ") at " + position.to_string();
}

const bool is_operator(const std::string& lexeme){
  return operators.find(lexeme) != operators.end();
}

const bool is_operator(const char lexeme){
  const std::string str(1, lexeme);
  return is_operator(str);
}



