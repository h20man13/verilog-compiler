/*
 * UnsignedInteger.cpp
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#include "common/types/UnsignedInteger.h"
#include "common/types/IntVal.h"

#include <string>

UnsignedInteger::UnsignedInteger(const unsigned int value) : IntVal<unsigned int>(value) {};

const std::string UnsignedInteger::get_class() const {
	return "Unsigned Integer";
}


