#include "common/ErrorLog.h"
#include "common/Destination.h"
#include "common/Error.h"

/**
 * The default constructor for the ErrorLog class just takes a Destination object to determine where to print
 * @param destination
 */
ErrorLog::ErrorLog(const Destination &destination) :
		destination(destination), error_log() {
}

/**
 * The error log copy constructor takes in an error log reference and produces a string representing a error log
 * @param error_log
 */

ErrorLog::ErrorLog(const ErrorLog &error_log) :
		destination(error_log.destination), error_log() {
	if (this != &error_log) {
		for (std::list<const Error>::const_iterator it =
				error_log.error_log.begin(); it != error_log.error_log.end();
				it++) {
			this->error_log.push_back(*it);
		}
	}
}

/**
 * The add function adds an error to an error log
 * @param error
 */

void ErrorLog::add(const Error &error) {
	error_log.push_back(error);
}

/**
 * The print method prints an error log.
 * Each error is separated by a newline character or /n
 */

void ErrorLog::print() const {
	for (std::list<const Error, std::allocator<const Error>>::const_iterator it =
			error_log.begin(); it != error_log.end(); it++) {
		destination.println(it->to_string());
	}
}

/**
 * The size function returns a size of an error log
 * @return the amount of errors stored in the error log currently
 */

int ErrorLog::size() const {
	return error_log.size();
}
