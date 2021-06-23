#include "common/Source.h"
#include "test/TestUtils.h"
#include <istream>
#include <sstream>

static std::stringstream is("abcdef");
static Source src(is);

static bool source_init_test(){
  if(src.current() != 'a' && src.next() != 'b'){
    return false;
  } else {
    return true;
  }
}

static bool source_total_test(){
  int count;
  std::string str = is.str();
  while(!src.eof()){
    if(str[count] != src.current()){
      return false;
    }
    src.advance();
    count++;
  }
  return true;
}

int main(){
  run_test(source_init_test);
  run_test(source_total_test);
  return 0;
}
