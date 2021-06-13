#include "common/Error.h"
#include "common/Colors.h"
 
/**
 * Default constructor that creates an Error. An instance of an error object contains a message and position
 * @param message the message that you want the error log to display
 * @param position The position the error occurred
 */

Error::Error(const std::string& message, const Position& position) : message(message), position(&position){}

/**
 * This constructor is to make a message with a NULL value.
 * If the position NULL then it will print only the message without the position
 * @param message
 */

Error::Error(const std::string& message) : message(message), position(NULL){}

/**
 * This is the copy constructor for Error objects
 * @param error a reference to another error object
 */

Error::Error(const Error& error) : message(error.message), position(error.position){}


/**
 * The to_string method converts the Error message to string. This is use full when an error log prints a message
 * @return a String
 */
const std::string Error::to_string() const {
  return bold_red("Error") + bold_white(": ") + message + ((position != NULL) ? " at " + position->to_string() : "");
}
