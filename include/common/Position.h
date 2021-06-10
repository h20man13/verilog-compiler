#ifndef POSITION_H
#define POSITION_H

#include <string>

class Position{
 private:
 const unsigned int lineNumber;
 const unsigned int linePosition;

 public:

 /**
 * Default constructor for Position Object that stores the line number and position in the line of each token
 * @param lineNumber the line number of the token
 * @param linePosition the position in the line of the 1st letter in the token
 */
 Position(const unsigned int lineNumber, const unsigned int linePosition);

 /**
 * Copy constructor for the position object
 * @param position Position object to make a copy of
 */
 Position(const Position& position);

 /**
 * Converts the position to the string. It is formatted like the example below:
 * [linePosition -> 0, lineNumber -> 0]
 */
 std::string to_string() const;
};

#endif
