#ifndef ERRORLOG_H
#define ERRORLOG_H

#include "Destination.h"
#include "Error.h"
#include <list>

class ErrorLog{
 private:
  std::list<const Error> error_log;
  const Destination destination;

 public:
  ErrorLog(const Destination& destination);
  ErrorLog(const ErrorLog& error_log);
  
  void add(const Error& error);
  void print() const;
  int size() const;
};
#endif
