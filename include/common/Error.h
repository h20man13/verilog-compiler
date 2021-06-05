#ifndef ERROR_H
#define ERROR_H

#include "Position.h"
#include <string>

class Error{
 private:
  const std::string message;
  const Position* const position;
 public:
  Error(const std::string& message, const Position &position);
  Error(const std::string& message);
  Error(const Error& error);
  const std::string to_string() const;
};

#endif
