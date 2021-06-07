#include <string>
#include "common/Colors.h"


#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */

const std::string white(const std::string& text){
  return WHITE + text + RESET;
}

const std::string black(const std::string& text){
  return BLACK + text + RESET;
}

const std::string red(const std::string& text){
  return RED + text + RESET;
}

const std::string green(const std::string& text){
  return GREEN + text + RESET;
}

const std::string yellow(const std::string& text){
  return YELLOW + text + RESET;
}

const std::string blue(const std::string& text){
 return BLUE + text + RESET;
}

const std::string magenta(const std::string& text){
 return MAGENTA + text + RESET;
}

const std::string cyan(const std::string& text){
 return CYAN + text + RESET;
}

const std::string bold_white(const std::string& text){
  return BOLDWHITE + text + RESET;
}

const std::string bold_black(const std::string& text){
  return BOLDBLACK + text + RESET;
}

const std::string bold_red(const std::string& text){
  return BOLDRED + text + RESET;
}

const std::string bold_green(const std::string& text){
  return BOLDGREEN + text + RESET;
}

const std::string bold_yellow(const std::string& text){
  return BOLDYELLOW + text + RESET;
}

const std::string bold_blue(const std::string& text){
 return BOLDBLUE + text + RESET;
}

const std::string bold_magenta(const std::string& text){
 return BOLDMAGENTA + text + RESET;
}

const std::string bold_cyan(const std::string& text){
 return BOLDCYAN + text + RESET;
}

