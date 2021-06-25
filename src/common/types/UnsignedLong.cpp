/*
 * UnsignedInteger.cpp
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#include "common/types/UnsignedLong.h"
#include "common/types/IntVal.h"

#include <string>

UnsignedLong::UnsignedLong(const unsigned long int value) : IntVal<unsigned long int>(value) {};

const std::string UnsignedLong::get_class() const {
	return "Unsigned Long";
}


