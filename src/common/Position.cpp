#include "common/Position.h"
#include <string>

/**
 * Default constructor for Position Object that stores the line NumWrap and position in the line of each token
 * @param lineNumWrap the line NumWrap of the token
 * @param linePosition the position in the line of the 1st letter in the token
 */

Position::Position(const unsigned int lineNumWrap, const unsigned int linePosition) : linePosition(linePosition), lineNumWrap(lineNumWrap){}

/**
 * Copy constructor for the position object
 * @param position Position object to make a copy of
 */

Position::Position(const Position& position): linePosition(position.linePosition), lineNumWrap(position.lineNumWrap){}

/**
 * Converts the position to the string. It is formatted like the example below:
 * [linePosition -> 0, lineNumWrap -> 0]
 */
std::string Position::to_string() const {
  return "[Line NumWrap -> " + std::to_string(lineNumWrap) + " | Line position -> " + std::to_string(linePosition) + ']';
}
