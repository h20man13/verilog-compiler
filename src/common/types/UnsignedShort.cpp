/*
 * Integer.cpp
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#include "common/types/UnsignedShort.h"

#include <string>

UnsignedShort::UnsignedShort(const unsigned short int value) : IntVal(value) {}

UnsignedShort::UnsignedShort(UnsignedShort const* &s_value) : IntVal(s_value->get_value()){
	if(s_value != NULL){
		delete s_value;
		s_value = this;
	}
}

UnsignedShort::operator unsigned short(){
	return get_value();
}

const std::string UnsignedShort::get_class() const {
	return "Unsigned Short";
}

