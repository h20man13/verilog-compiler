#ifndef ERROR_H
#define ERROR_H

#include "Position.h"
#include <string>

/**
 * The Error class is used to create error objects. These objects are added to an error log to eventually be printed.
 * @author Jacob Bauer
 */
class Error{
 private:
  const std::string message; //error message
  const Position* const position; //position where the error occurred
 public:
  /**
   * Default constructor that creates an Error. An instance of an error object contains a message and position
   * @param message the message that you want the error log to display
   * @param position The position the error occurred
   */
  Error(const std::string& message, const Position &position);

  /**
   * This constructor is to make a message with a NULL value.
   * If the position NULL then it will print only the message without the position
   * @param message
   */
  Error(const std::string& message);

  /**
   * This is the copy constructor for Error objects
   * @param error a reference to another error object
   */
  Error(const Error& error);

  /**
   * The to_string method converts the Error message to string. This is use full when an error log prints a message
   * @return a String
   */
  const std::string to_string() const;
};

#endif
