#ifndef POSITION_H
#define POSITION_H

#include <string>

class Position{
 private:
 const unsigned int lineNumber;
 const unsigned int linePosition;

 public:
 Position(const unsigned int lineNumber, const unsigned int linePosition);
 Position(const Position& position);
 std::string to_string() const;
};

#endif
