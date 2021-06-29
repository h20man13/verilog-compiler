/*
 * Real.cpp
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#include "common/types/Real.h"

#include <string>

Real::Real(const double value) : Number(value){};

Real::operator double(){
	return get_value();
}

const std::string Real::get_class() const {
	return "Real";
}
