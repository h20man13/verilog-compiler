/*
 * Integer.cpp
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#include "common/types/UnsignedShort.h"

#include <string>

UnsignedShort::UnsignedShort(const unsigned short int value) : IntVal(value) {}

const std::string UnsignedShort::get_class() const {
	return "Unsigned Short";
}

