#ifndef SOURCE_H
#define SOURCE_H

#include "Position.h"
#include <istream>

class Source{
 private:
  std::istream* input;
  int _past;
  int _current;
  int _next;

  unsigned int line_position;
  unsigned int line_number;

  int current_raw() const;
  int next_raw() const;

 public:
  Source(std::istream &input);
  Source(const Source &source);
  
  void advance(const unsigned int numtimes = 1);

  char past() const;
  char current() const;
  char next() const;
  
  bool has_next() const;
  bool eof() const;

  const Position get_current_position() const;

  Source& operator=(const Source& source);
  
};

#endif
