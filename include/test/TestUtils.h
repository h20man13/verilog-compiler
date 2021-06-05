#ifndef TEST_UTILS_H
#define TEST_UTILS_H

#include <iostream>
#include <string>
#include <stdlib.h>

#include "common/Colors.h"

#define run_test(test)							\
  do{									\
    if(true == (*test)()){						\
      std::cout << bold_green("Success") << bold_white(":") << " Test " << bold_white(#test) << " passed" << std::endl; \
    } else {								\
      std::cerr << bold_red("Error") << bold_white(":") << " Test " << bold_white(#test)  << " failed" << std::endl; \
      return 1;								\
    }									\
  } while(false)

#endif
