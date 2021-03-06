#include "common/Destination.h"
#include "test/TestUtils.h"

#include <sstream>

bool string_stream_test(){
  std::stringstream ss;
  Destination dest(ss);
  dest.no_flush(true); //dont flush the stream
  std::string mystr("why do i want to print stuff so bad");
  dest.print(mystr);
  char* result;
  return ss.str() == mystr;
}

int main(){
  run_test(string_stream_test);
}
