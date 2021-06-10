#ifndef SOURCE_H
#define SOURCE_H

#include "Position.h"
#include <istream>

/**
 * The source class is used to collect input from various input streams
 * @author Jacob Bauer
 */
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

  /**
   * The default constructor for all source objects
   * @param input an inputs stream to receive characters from
   */
  Source(std::istream &input);

  /**
   * The copy constructor for all source objects
   * @param source  the source to copy from
   */
  Source(const Source &source);

  /**
   * The advannce function moves the stream forward by one Byte
   * @param numtimes  the number of times to advance the stream the default is 1
   * @return None
   */
  void advance(const unsigned int numtimes = 1);

  /**
   * @return a character representing one character behind the current position in the stream
   */
  char past() const;

  /**
   * @return a character representing the current position in the stream
   */
  char current() const;

  /**
   * @return a character representing the next token in the stream
   */
  char next() const;

  /**
   * @return returns true if there is a next character in the source
   */
  
  bool has_next() const;

  /**
   * @return Returns whether the source is currently at the end of the file
   */
  bool eof() const;

  /**
   * @return Returns the current position the source is at in the file
   */
  const Position get_current_position() const;

  /**
   * Assigns a copy of one source to another source
   *(It should be noted that the stream that is coppied over is a shallow copy)
   */
  Source& operator=(const Source& source);
  
};

#endif
