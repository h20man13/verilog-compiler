/*
 * UnsignedInteger.cpp
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#include "common/types/UnsignedLong.h"
#include "common/types/IntVal.h"

#include <string>

/**
 * The unsigned long creates an unsigned long object
 * @param value the initial value it should be set to
 */

UnsignedLong::UnsignedLong(const unsigned long value) : IntVal(value) {};

/**
 * The get class method returns the name of the class as a string
 * @return  a string representing the type name or more specifically unsigned long
 */

const std::string UnsignedLong::get_class() const {
	return "Unsigned Long";
}


