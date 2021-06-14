#include "common/Position.h"
#include "common/Colors.h"
#include "test/TestUtils.h"
#include <iostream>

static bool basic_position_test(){
  Position pos(40, 20);
  return pos.to_string() == "[Line NumWrap -> 40 | Line position -> 20]";
}

int main(){
  run_test(basic_position_test);
  return 0;
}


