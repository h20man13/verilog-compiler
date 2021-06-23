#include "Token.h"
#include "common/Source.h"
#include "common/Destination.h"
#include "common/ErrorLog.h"
#include "main/Lexer.h"
#include "test/TestUtils.h"

#include <sstream>
#include <iostream>
#include <list>

#define test_one_type(type)							\
  do{									\
    int count;							\
    for(std::list<const Token>::iterator it = toks.begin(); it != toks.end(); it++){ \
      if(it->get_type() != type){					\
	std::cout << "Error: At token " << count << " expected " << #type << " but got " << it -> to_string()  << std::endl; \
	return false;							\
      }									\
      count++;								\
    }									\
  } while(false)

#define test_type_once(type)						\
  do{									\
    if(it->get_type() != type){						\
      std::cout << "Error: expected " << #type << " but got " << it->to_string()  << std::endl; \
return false;								\
    } else {								\
      std::cout << it->to_string() << std::endl;			\
    }									\
    it++;								\
  } while(false)

static bool test_identifier(){
  std::stringstream ss("This is test1");
  Source source(ss);
  Destination dest(std::cout);
  ErrorLog error_log(dest);
  Lexer lex(error_log);

  lex.attach_source(source);

  std::list<const Token> toks = lex.gen_tokens();

  test_one_type(tok::IDENTIFIER);
  
  return true;
}

static bool test_macro_identifier(){

  std::stringstream ss("`This `is `test1");
  Source source(ss);
  Destination dest(std::cout);
  ErrorLog error_log(dest);
  Lexer lex(error_log);

  lex.attach_source(source);

  std::list<const Token> toks = lex.gen_tokens();

  test_one_type(tok::MACROIDENTIFIER);
  
  return true;
}

static bool test_keywords(){

  std::stringstream ss("initial \n allways \n begin \n end \n module \n endmodule \n task \n endtask \n function \n endfunction \n assign \n posege \n negege \n or \n and \n nand \n nor \n xor \n xnor \n not \n if \n else \n while \n wait \n forever \n repeat \n for \n integer \n real \n reg \n wire \n output \n input");
  Source source(ss);
  Destination dest(std::cout);
  ErrorLog error_log(dest);
  Lexer lex(error_log);
  lex.attach_source(source);

  std::list<const Token> toks = lex.gen_tokens();
  
  std::list<const Token>::iterator it = toks.begin();
  
  test_type_once(INITIAL);
  test_type_once(ALLWAYS);
  test_type_once(BEGIN);
  test_type_once(END);
  test_type_once(MODULE);
  test_type_once(ENDMODULE);
  test_type_once(TASK);
  test_type_once(ENDTASK);
  test_type_once(FUNCTION);
  test_type_once(ENDFUNCTION);
  test_type_once(ASSIGN);
  test_type_once(POSEGE);
  test_type_once(NEGEGE);
  test_type_once(OR);
  test_type_once(AND);
  test_type_once(NAND);
  test_type_once(NOR);
  test_type_once(XOR);
  test_type_once(XNOR);
  test_type_once(NOT);
  test_type_once(IF);
  test_type_once(ELSE);
  test_type_once(WHILE);
  test_type_once(WAIT);
  test_type_once(FOREVER);
  test_type_once(REPEAT);
  test_type_once(FOR);
  test_type_once(INTEGER);
  test_type_once(REAL);
  test_type_once(REG);
  test_type_once(WIRE);
  test_type_once(OUTPUT);
  test_type_once(INPUT);

  return true;
}

static bool test_decimal(){

  std::stringstream ss("0 11 9999 0123456789 'D893084 4'd98349");
  Source source(ss);
  Destination dest(std::cout);
  ErrorLog error_log(dest);
  Lexer lex(error_log);

  lex.attach_source(source);

  std::list<const Token> toks = lex.gen_tokens();

  test_one_type(tok::NumWrap);
  
  return true;
}

static bool test_hexidecimal(){

  std::stringstream ss("'h98f08 4'Hfffff 54'h0984903");
  Source source(ss);
  Destination dest(std::cout);
  ErrorLog error_log(dest);
  Lexer lex(error_log);

  lex.attach_source(source);

  std::list<const Token> toks = lex.gen_tokens();

  test_one_type(tok::NumWrap);
  
  return true;
}

static bool test_octal(){

  std::stringstream ss("'o07 4'O74343 34'O01713");
  Source source(ss);
  Destination dest(std::cout);
  ErrorLog error_log(dest);
  Lexer lex(error_log);

  lex.attach_source(source);

  std::list<const Token> toks = lex.gen_tokens();

  test_one_type(tok::NumWrap);
  
  return true;
}

static bool test_binary(){

  std::stringstream ss("'b0101010 4'b011101 34'B011010");
  Source source(ss);
  Destination dest(std::cout);
  ErrorLog error_log(dest);
  Lexer lex(error_log);

  lex.attach_source(source);

  std::list<const Token> toks = lex.gen_tokens();

  test_one_type(tok::NumWrap);
  
  return true;
}

static bool test_strings(){

  std::stringstream ss("\"\" \"testing\" \"!@#$%^&(*)-_=+\"");
  Source source(ss);
  Destination dest(std::cout);
  ErrorLog error_log(dest);
  Lexer lex(error_log);

  lex.attach_source(source);

  std::list<const Token> toks = lex.gen_tokens();

  test_one_type(tok::STRING);
  
  return true;
}

static bool test_comments(){

  std::stringstream ss("\" /* This is a comment */ \"//                                  \n");
  Source source(ss);
  Destination dest(std::cout);
  ErrorLog error_log(dest);
  Lexer lex(error_log);

  lex.attach_source(source);

  std::list<const Token> toks = lex.gen_tokens();

  test_one_type(tok::STRING);
  
  return true;
}

static bool test_operators(){

  std::stringstream ss("(){}[],+-*%/?:<><=>=;@$= == === != !== &&||!&~ | ^^~~^ ~& ~| <<>>");
  Source source(ss);
  Destination dest(std::cout);
  ErrorLog error_log(dest);
  Lexer lex(error_log);
  lex.attach_source(source);

  std::list<const Token> toks = lex.gen_tokens();
  
  std::list<const Token>::iterator it = toks.begin();
  
  test_type_once(LPAR);
  test_type_once(RPAR);
  test_type_once(LCURL);
  test_type_once(RCURL);
  test_type_once(LBRACK);
  test_type_once(RBRACK);
  test_type_once(COMMA);
  test_type_once(PLUS);
  test_type_once(MINUS);
  test_type_once(TIMES);
  test_type_once(MOD);
  test_type_once(DIV);
  test_type_once(QUEST);
  test_type_once(COLON);
  test_type_once(LT);
  test_type_once(GT);
  test_type_once(LE);
  test_type_once(GE);
  test_type_once(SEMI);
  test_type_once(AT);
  test_type_once(DOLLAR);
  test_type_once(EQ1);
  test_type_once(EQ2);
  test_type_once(EQ3);
  test_type_once(NE1);
  test_type_once(NE2);
  test_type_once(LAND);
  test_type_once(LOR);
  test_type_once(LNEG);
  test_type_once(BAND);
  test_type_once(BNEG);
  test_type_once(BOR);
  test_type_once(BXOR);
  test_type_once(BXNOR);
  test_type_once(BXNOR);
  test_type_once(BNAND);
  test_type_once(BNOR);
  test_type_once(LSHIFT);
  test_type_once(RSHIFT);

  return true;
}






int main(){
  run_test(test_identifier);
  run_test(test_macro_identifier);
  run_test(test_keywords);
  run_test(test_decimal);
  run_test(test_hexidecimal);
  run_test(test_octal);
  run_test(test_binary);
  run_test(test_strings);
  run_test(test_comments);
  run_test(test_operators);
  return 0;
}
