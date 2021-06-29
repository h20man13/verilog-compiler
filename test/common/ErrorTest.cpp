#include "test/TestUtils.h"
#include "common/Error.h"
#include "common/Position.h"
#include "common/Colors.h"
#include <string>
#include <iostream>

bool basic_error_test(){
  Position p(50, 50);
  Error e("This is my error", p);
  return e.to_string() == bold_red("Error") + bold_white(": ") + "This is my error at [Line Number -> 50 | Line position -> 50]";
}

int main(){
  run_test(basic_error_test);
}
