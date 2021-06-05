#include "common/Error.h"
#include "common/Colors.h"
 
Error::Error(const std::string& message, const Position& position) : message(message), position(&position){}

Error::Error(const std::string& message) : message(message), position(NULL){}

Error::Error(const Error& error) : message(error.message), position(error.position){}

const std::string Error::to_string() const {
  
  return bold_red("Error") + bold_white(": ") + message + ((position != NULL) ? " at " + position->to_string() : "");
}
