/*
 * Integer.cpp
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#include "common/types/Byte.h"

#include <string>

Byte::Byte(const char value): IntVal(value) {}

Byte::Byte(Byte const* &byte): IntVal(byte->get_value()){
	if(byte != NULL){
		delete byte;
		byte = this;
	}
}

Byte::operator char(){
	return get_value();
}

const std::string Byte::get_class() const {
	return "Byte";
}

