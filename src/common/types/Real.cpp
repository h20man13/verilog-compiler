/*
 * Real.cpp
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#include "common/types/Real.h"
#include "common/types/Number.h"

#include <string>

Real::Real(const double value) : Number<double>(value){};

const std::string Real::get_class() const {
	return "Real";
}
