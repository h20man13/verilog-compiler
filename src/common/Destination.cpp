#include <ostream>
#include <iostream>
#include "common/Destination.h"

/**
 * The default constructor for a Destination
 * @param output the output stream that the destination needs to print to
 */
Destination::Destination(std::ostream &output) : output(&output) {}

/**
 * This method is used to decide if the buffer should flush automatically. The default in c++ is yes however in certain situations like when printing to a string stream for testing purpousing it is advised you set this to false.
 * @param tf this should be true if you want buffering or false if you do not want buffering
 * @return None
 */
void Destination::no_flush(const bool tf) const {
  if(tf){
    (*output) << std::unitbuf;
  } else {
    (*output) << std::nounitbuf;
  }
}


/**
 * Prints the string to the buffer
 * @param the string to print to the output stream
 * @return None
 */
void Destination::print(const std::string &str) const {
  (*output) << str;
}

/**
 * Prints the string to the buffer
 * @param the string to print to the output stream
 * @return None
 */
void Destination::println(const std::string &str) const {
  print(str);
  (*output) << std::endl;
}
