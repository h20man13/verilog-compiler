/*
 * Integer.cpp
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#include "common/types/Integer.h"

#include <string>

Integer::Integer(const int value) : IntVal(value) {}

const std::string Integer::get_class() const {
	return "Integer";
}

