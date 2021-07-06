/*
 * Integer.cpp
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#include "common/types/Integer.h"

#include <string>

Integer::Integer(const int value) : IntVal(value) {}

Integer::Integer(Integer const* &integer): IntVal(integer->get_value()){
	if(integer != NULL){
		delete integer;
		integer = this;
	}
}

Integer::operator int(){
	return get_value();
}

const std::string Integer::get_class() const {
	return "Integer";
}

