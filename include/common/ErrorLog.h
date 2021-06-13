#ifndef ERRORLOG_H
#define ERRORLOG_H

#include "Destination.h"
#include "Error.h"
#include <list>

/**
 * The error log class is used to create an error log object. This object is where the lexer and the parser log errors before they are printed
 * @author Jacob Bauer
 */
class ErrorLog{
 private:
  std::list<const Error> error_log; //error_log object
  const Destination destination; //The destination determines where the error log is printed

 public:
  /**
   * The default constructor for the ErrorLog class just takes a Destination object to determine where to print
   * @param destination
   */
  ErrorLog(const Destination& destination);

  /**
   * The error log copy constructor takes in an error log reference and produces a string representing a error log
   * @param error_log
   */
  ErrorLog(const ErrorLog& error_log);
  
  /**
   * The add function adds an error to an error log
   * @param error
   */
  void add(const Error& error);

  /**
   * The print method prints an error log.
   * Each error is separated by a newline character or /n
   */
  void print() const;

  /**
   * The size function returns a size of an error log
   * @return the amount of errors stored in the error log currently
   */
  int size() const;
};
#endif
