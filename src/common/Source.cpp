#include "common/Source.h"
#include "common/Position.h"
#include <istream>
#include <assert.h>

Source::Source(std::istream& input) : input(&input) {
  assert(input.peek() != -1);
  _current = input.get();
  _next = input.get();
  _past = -1;
  if(_current != -1){
    line_number = 1;
    line_position = 0;
  }
}

Source::Source(const Source& source) : input(source.input) {
  if(this != &source){
    _next = source._next;
    _current = source._current;
    _past = source._past;
    line_number = source.line_number;
    line_position = source.line_position;
  }
}

void Source::advance(const unsigned int num){
  int i = 0;
  while(i < num && !eof()){
    _past = _current;
    _current = _next;
    _next = input->get();
    if(_current == '\n'){
      line_number++;
      line_position = 0;
    } else if (!eof()){
      line_position++;
    }
    i++;
  }
}

bool Source::eof() const {
  return current_raw() == -1;
}

bool Source::has_next() const {
  return next_raw() != -1;
}

char Source::current() const {
  return (char)_current;
}

char Source::past() const {
  return (char)_past;
}

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
  Position pos(line_number, line_position);
  return pos;
}
Source& Source::operator=(const Source& source){
  if(this != &source){
    _next = source._next;
    _current = source._current;
    _past = source._past;
    input = source.input;
  }

  return *this;
}
