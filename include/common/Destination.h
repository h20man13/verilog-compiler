#ifndef DESTINATION
#define DESTINATION

#include <ostream>

/**
 * The Destination class is used to create destination objects which are pretty much just decorated output streams. These can be used to route different errorlog or debug outputs to seperate locations whether it be stdout or over an internet stream
 * @author Jacob Bauer
 */
class Destination{
private:
  std::ostream* const output; //the stream where the destination prints to
  
public:

/**
 * The default constructor for a Destination
 * @param output the output stream that the destination needs to print to
 */
  Destination(std::ostream &output);

/**
 * This method is used to decide if the buffer should flush automatically. The default in c++ is yes however in certain situations like when printing to a string stream for testing purpousing it is advised you set this to false.
 * @param tf this should be true if you want buffering or false if you do not want buffering
 * @return None
 */
void no_flush(const bool tf) const;

/**
 * Prints the string to the buffer
 * @param the string to print to the output stream
 * @return None
 */
 void print(const std::string &to_print) const;

 /**
 * Prints the string to the buffer with a newline character appended to the end of the string
 * @param the string to print to the output stream
 * @return None
 */ 
 void println(const std::string &to_print) const;
};

#endif
