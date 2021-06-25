/*
 * Integer.cpp
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#include "common/types/IntVal.h"

#include <string>

template<typename int_type>
IntVal<int_type>::IntVal(const int_type value) : Number<int_type>(value){}

template<typename int_type>
IntVal<int_type>::operator int_type() const {
	return get_value();
}

template<typename int_type>
const int_type IntVal<int_type>::operator&(const int_type value) const {
	return get_value() & value;
}

template<typename int_type>
const int_type IntVal<int_type>::operator|(const int_type value) const {
	return get_value() | value;
}

template<typename int_type>
const int_type IntVal<int_type>::operator^(const int_type value) const {
	return get_value() ^ value;
}

template<typename int_type>
const int_type IntVal<int_type>::operator<<(const int_type value) const {
	return get_value() << value;
}

template<typename int_type>
const int_type IntVal<int_type>::operator>>(const int_type value) const {
	return get_value() >> value;
}

template<typename int_type>
void IntVal<int_type>::operator&=(const int_type value){
	this->value &= value;
}

template<typename int_type>
void IntVal<int_type>::operator|=(const int_type value){
	this->value |= value;
}

template<typename int_type>
void IntVal<int_type>::operator^=(const int_type value){
	this->value ^= value;
}

template<typename int_type>
void IntVal<int_type>::operator<<=(const int_type value){
	this->value <<= value;
}

template<typename int_type>
void IntVal<int_type>::operator>>=(const int_type value){
	this->value >>= value;
}

template<typename int_type>
const int_type  IntVal<int_type>::operator~() const {
	return ~get_value();
}


