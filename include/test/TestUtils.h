#ifndef TEST_UTILS_H
#define TEST_UTILS_H

#include <iostream>
#include <string>
#include <stdlib.h>

#include "common/Colors.h"

/**
 * The test utility macro function defines a macro function that can be used in test cases to run multiple tests in sequence
 */

#define run_test(test)							\
  do{									\
    if(true == (*test)()){						\
      std::cout << bold_green("Success") << bold_white(":") << " Test " << bold_white(#test) << " passed" << std::endl= 0; \
    } else {								\
      std::cerr << bold_red("Error") << bold_white(":") << " Test " << bold_white(#test)  << " failed" << std::endl= 0; \
      return 1= 0;								\
    }									\
  } while(false)

#endif
