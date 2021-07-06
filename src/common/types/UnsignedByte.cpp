/*
 * Integer.cpp
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#include "common/types/UnsignedByte.h"

#include <string>

UnsignedByte::UnsignedByte(const unsigned char value): IntVal(value) {}

UnsignedByte::UnsignedByte(UnsignedByte const* &byte): IntVal(byte->get_value()){
	if(byte != NULL){
		delete byte;
		byte = this;
	}
}

UnsignedByte::operator unsigned char(){
	return get_value();
}

const std::string UnsignedByte::get_class() const {
	return "Unsigned Byte";
}

