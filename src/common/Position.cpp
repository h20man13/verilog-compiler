#include "common/Position.h"
#include <string>

Position::Position(const unsigned int linePosition, const unsigned int lineNumber) : linePosition(linePosition), lineNumber(lineNumber){};

Position::Position(const Position& position): linePosition(position.linePosition), lineNumber(position.lineNumber){}

std::string Position::to_string() const {
  return "[Line number -> " + std::to_string(lineNumber) + " | Line position -> " + std::to_string(linePosition) + ']'; 
}
