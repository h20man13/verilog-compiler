#include <ostream>
#include <iostream>
#include "common/Destination.h"

Destination::Destination(std::ostream &output) : output(&output) {}

void Destination::no_flush(const bool tf) const {
  if(tf){
    (*output) << std::unitbuf;
  } else {
    (*output) << std::nounitbuf;
  }
}

void Destination::print(const std::string &str) const {
  (*output) << str;
}

void Destination::println(const std::string &str) const {
  print(str);
  (*output) << std::endl;
}
