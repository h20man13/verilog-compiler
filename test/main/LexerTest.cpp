#include "Token.h"
#include "common/Source.h"
#include "common/Destination.h"
#include "common/ErrorLog.h"
#include "main/Lexer.h"
#include "test/TestUtils.h"

#include <sstream>
#include <iostream>
#include <list>

#define test_type(type)							\
  do{									\
    int count = 0;							\
    for(std::list<const Token>::iterator it = toks.begin(); it != toks.end(); it++){ \
      if(it->get_type() != type){					\
      std::cout << "Error: At token " << count << " expected " << #type << " but got " << type_to_string(it->get_type())  << " at " << it->get_position().to_string() << std::endl; \
	return false;							\
      }									\
      count++;								\
    }									\
  } while(false)

bool test_identifier(){
  std::stringstream ss("This is test1");
  Source source(ss);
  Destination dest(std::cout);
  ErrorLog error_log(dest);
  Lexer lex(error_log);

  lex.attach_source(source);

  std::list<const Token> toks = lex.gen_tokens();

  test_type(tok::IDENTIFIER);
  
  return true;
}

bool test_macro_identifier(){
  std::stringstream ss("`This `is `test1");
  Source source(ss);
  Destination dest(std::cout);
  ErrorLog error_log(dest);
  Lexer lex(error_log);

  lex.attach_source(source);

  std::list<const Token> toks = lex.gen_tokens();

  test_type(tok::MACROIDENTIFIER);
  
  return true;
}


int main(){
  run_test(test_identifier);
  run_test(test_macro_identifier);
  return 0;
}
