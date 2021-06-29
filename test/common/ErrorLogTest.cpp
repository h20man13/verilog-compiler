#include "common/ErrorLog.h"
#include "common/Error.h"
#include "common/Position.h"
#include "common/Destination.h"
#include "test/TestUtils.h"

#include <sstream>
#include <iostream>

static bool error_log_test(){
  std::stringstream ss;
  Destination dest(ss);
  Position p(0, 0);
  Error err1("My error 1", p);
  Error err2("My error 2", p);
  Error err3("My error 3", p);

  ErrorLog error_log(dest);

  error_log.add(err1);
  error_log.add(err2);
  error_log.add(err3);

  error_log.print();

  return ss.str() == bold_red("Error") + bold_white(": ") + "My error 1 at [Line Number -> 0 | Line position -> 0]\n" + bold_red("Error") + bold_white(": ") + "My error 2 at [Line Number -> 0 | Line position -> 0]\n" + bold_red("Error") + bold_white(": ") + "My error 3 at [Line Number -> 0 | Line position -> 0]\n";
}


int main(){
  run_test(error_log_test);
  return 0;
}
