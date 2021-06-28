/*
 * UnsignedInteger.cpp
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#include "common/types/Long.h"
#include "common/types/IntVal.h"

#include <string>

Long::Long(const long value) : IntVal(value) {};

const std::string Long::get_class() const {
	return "Unsigned Long";
}


