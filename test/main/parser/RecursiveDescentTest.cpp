#include "Token.h"
#include "common/Source.h"
#include "common/Destination.h"
#include "common/ErrorLog.h"
#include "./SymbolTable.h"
#include "main/parser/RecursiveDescent.h"
#include "main/Lexer.h"
#include "test/TestUtils.h"

#include <sstream>
#include <iostream>
#include <list>

static bool test_concatenation(){
  std::stringstream ss("{x, g, f, h, t}");
  Source source(ss);
  Destination dest(std::cout);
  ErrorLog error_log(dest);
  Lexer lex(error_log);

  lex.attach_source(source);

  std::list<const Token> toks = lex.gen_tokens();

  SymbolTable table("Scope -- Test Concatenation", error_log);

  table.insert("x", SymbolTable::GLOBAL | SymbolTable::WIRE | SymbolTable::VECTOR, Position(1, 2), NULL);
  table.insert("g", SymbolTable::GLOBAL | SymbolTable::WIRE | SymbolTable::VECTOR, Position(1, 4), NULL);
  table.insert("f", SymbolTable::GLOBAL | SymbolTable::WIRE | SymbolTable::VECTOR, Position(1, 6), NULL);
  table.insert("h", SymbolTable::GLOBAL | SymbolTable::WIRE | SymbolTable::VECTOR, Position(1, 8), NULL);
  table.insert("t", SymbolTable::GLOBAL | SymbolTable::WIRE | SymbolTable::VECTOR, Position(1, 4), NULL);

  RecursiveDescent parser(error_log, toks);
  
  parser.parse_expression(&table);

  error_log.print();

  return true;
}

int main(){
	run_test(test_concatenation);
	return 0;
}
