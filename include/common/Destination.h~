#ifndef DESTINATION
#define DESTINATION

#include <ostream>

class Destination{
private:
  std::ostream* const output;
  
public:
  Destination(std::ostream &output);
  void no_flush(const bool tf) const;
  void print(const std::string &to_print) const;
  void println(const std::string &to_print) const;
};

#endif
