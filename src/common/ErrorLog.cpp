#include "common/ErrorLog.h"
#include "common/Destination.h"
#include "common/Error.h"

ErrorLog::ErrorLog(const Destination& destination): destination(destination), error_log(){}

ErrorLog::ErrorLog(const ErrorLog& error_log): destination(error_log.destination), error_log(){
  if(this != &error_log){
    for(std::list<const Error>::const_iterator it = error_log.error_log.begin(); it != error_log.error_log.end(); it++){
      this->error_log.push_back(*it);
    }
  }
}

void ErrorLog::add(const Error& error){
  error_log.push_back(error);
}

void ErrorLog::print() const {
  for (std::list<const Error, std::allocator<const Error>>::const_iterator it = error_log.begin(); it != error_log.end(); it++){
    destination.println(it->to_string());
  }
}

int ErrorLog::size() const {
  return error_log.size();
}
