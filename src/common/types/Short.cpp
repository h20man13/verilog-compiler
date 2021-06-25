/*
 * Integer.cpp
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#include "common/types/Short.h"

#include <string>

Short::Short(const short int value) : IntVal(value) {}

const std::string Short::get_class() const {
	return "Short";
}

