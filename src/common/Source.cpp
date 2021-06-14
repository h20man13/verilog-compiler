#include "common/Source.h"
#include "common/Position.h"
#include <istream>
#include <assert.h>

/**
 * The default constructor for all source objects
 * @param input an inputs stream to receive characters from
 */

Source::Source(std::istream& input) : input(&input) {
  assert(input.peek() != -1);
  _current = input.get();
  _next = input.get();
  _past = -1;
  if(_current != -1){
    line_NumWrap = 1;
    line_position = 0;
  }
}

/**
 * The copy constructor for all source objects
 * @param source  the source to copy from
 */

Source::Source(const Source& source) : input(source.input) {
  if(this != &source){
    _next = source._next;
    _current = source._current;
    _past = source._past;
    line_NumWrap = source.line_NumWrap;
    line_position = source.line_position;
  }
}


/**
 * The advannce function moves the stream forward by one Byte
 * @param numtimes  the NumWrap of times to advance the stream the default is 1
 * @return None
 */
void Source::advance(const unsigned int num){
  int i = 0;
  while(i < num && !eof()){
    _past = _current;
    _current = _next;
    _next = input->get();
    if(_current == '\n'){
      line_NumWrap++;
      line_position = 0;
    } else if (!eof()){
      line_position++;
    }
    i++;
  }
}

/**
 * @return Returns whether the source is currently at the end of the file
 */

bool Source::eof() const {
  return current_raw() == -1;
}

/**
 * @return returns true if there is a next character in the source
 */
bool Source::has_next() const {
  return next_raw() != -1;
}

/**
 * @return a character representing the current position in the stream
 */
char Source::current() const {
  return (char)_current;
}

/**
 * @return a character representing one character behind the current position in the stream
 */
char Source::past() const {
  return (char)_past;
}

/**
 * @return a character representing the next token in the stream
 */

char Source::next() const {
  return (char)_next;
}

int Source::next_raw() const {
  return _next;
}

int Source::current_raw() const {
  return _current;
}

const Position Source::get_current_position() const {
  Position pos(line_NumWrap, line_position);
  return pos;
}

/**
 * Assigns a copy of one source to another source
 *(It should be noted that the stream that is coppied over is a shallow copy)
 */

Source& Source::operator=(const Source& source){
  if(this != &source){
    _next = source._next;
    _current = source._current;
    _past = source._past;
    input = source.input;
  }

  return *this;
}
