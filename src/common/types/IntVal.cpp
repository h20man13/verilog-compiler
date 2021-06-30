/*
 * IntVal.cpp
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#include "common/types/IntVal.h"

#include <string>

template<typename int_type>
IntVal<int_type>::IntVal(const int_type value) : Number<int_type>(value){}

template<typename int_type>
const int_type IntVal<int_type>::operator%(const int value) const {
	return this->get_value() % value;
}

template<typename int_type>
const int_type IntVal<int_type>::operator%(const unsigned int value) const {
	return this->get_value() % value;
}

template<typename int_type>
const int_type IntVal<int_type>::operator%(const long value) const {
	return this->get_value() % value;
}

template<typename int_type>
const int_type IntVal<int_type>::operator%(const unsigned long value) const {
	return this->get_value() % value;
}

template<typename int_type>
const int_type IntVal<int_type>::operator%(const short value) const {
	return this->get_value() % value;
}

template<typename int_type>
const int_type IntVal<int_type>::operator%(const unsigned short value) const {
	return this->get_value() % value;
}

template<typename int_type>
const int_type IntVal<int_type>::operator%(const char value) const {
	return this->get_value() % value;
}

template<typename int_type>
const int_type IntVal<int_type>::operator%(const unsigned char value) const {
	return this->get_value() % value;
}

template<typename int_type>
const int_type IntVal<int_type>::operator&(const int value) const {
	return this->get_value() & value;
}

template<typename int_type>
const int_type IntVal<int_type>::operator&(const unsigned int value) const {
	return this->get_value() & value;
}

template<typename int_type>
const int_type IntVal<int_type>::operator&(const long value) const {
	return this->get_value() & value;
}

template<typename int_type>
const int_type IntVal<int_type>::operator&(const unsigned long value) const {
	return this->get_value() & value;
}

template<typename int_type>
const int_type IntVal<int_type>::operator&(const short value) const {
	return this->get_value() & value;
}

template<typename int_type>
const int_type IntVal<int_type>::operator&(const unsigned short value) const {
	return this->get_value() & value;
}

template<typename int_type>
const int_type IntVal<int_type>::operator&(const char value) const {
	return this->get_value() & value;
}

template<typename int_type>
const int_type IntVal<int_type>::operator&(const unsigned char value) const {
	return this->get_value() & value;
}

template<typename int_type>
const int_type IntVal<int_type>::operator|(const int value) const {
	return this->get_value() | value;
}

template<typename int_type>
const int_type IntVal<int_type>::operator|(const unsigned int value) const {
	return this->get_value() | value;
}

template<typename int_type>
const int_type IntVal<int_type>::operator|(const long value) const {
	return this->get_value() | value;
}

template<typename int_type>
const int_type IntVal<int_type>::operator|(const unsigned long value) const {
	return this->get_value() | value;
}

template<typename int_type>
const int_type IntVal<int_type>::operator|(const short value) const {
	return this->get_value() | value;
}

template<typename int_type>
const int_type IntVal<int_type>::operator|(const unsigned short value) const {
	return this->get_value() | value;
}

template<typename int_type>
const int_type IntVal<int_type>::operator|(const char value) const {
	return this->get_value() | value;
}

template<typename int_type>
const int_type IntVal<int_type>::operator|(const unsigned char value) const {
	return this->get_value() | value;
}

template<typename int_type>
const int_type IntVal<int_type>::operator^(const int value) const {
	return this->get_value() ^ value;
}

template<typename int_type>
const int_type IntVal<int_type>::operator^(const unsigned int value) const {
	return this->get_value() ^ value;
}

template<typename int_type>
const int_type IntVal<int_type>::operator^(const long value) const {
	return this->get_value() ^ value;
}

template<typename int_type>
const int_type IntVal<int_type>::operator^(const unsigned long value) const {
	return this->get_value() ^ value;
}

template<typename int_type>
const int_type IntVal<int_type>::operator^(const short value) const {
	return this->get_value() ^ value;
}

template<typename int_type>
const int_type IntVal<int_type>::operator^(const unsigned short value) const {
	return this->get_value() ^ value;
}

template<typename int_type>
const int_type IntVal<int_type>::operator^(const char value) const {
	return this->get_value() ^ value;
}

template<typename int_type>
const int_type IntVal<int_type>::operator^(const unsigned char value) const {
	return this->get_value() ^ value;
}

template<typename int_type>
const int_type IntVal<int_type>::operator<<(const int value) const {
	return this->get_value() << value;
}

template<typename int_type>
const int_type IntVal<int_type>::operator<<(const unsigned int value) const {
	return this->get_value() << value;
}

template<typename int_type>
const int_type IntVal<int_type>::operator<<(const long value) const {
	return this->get_value() << value;
}

template<typename int_type>
const int_type IntVal<int_type>::operator<<(const unsigned long value) const {
	return this->get_value() << value;
}

template<typename int_type>
const int_type IntVal<int_type>::operator<<(const short value) const {
	return this->get_value() << value;
}

template<typename int_type>
const int_type IntVal<int_type>::operator<<(const unsigned short value) const {
	return this->get_value() << value;
}

template<typename int_type>
const int_type IntVal<int_type>::operator<<(const char value) const {
	return this->get_value() << value;
}

template<typename int_type>
const int_type IntVal<int_type>::operator<<(const unsigned char value) const {
	return this->get_value() << value;
}

template<typename int_type>
const int_type IntVal<int_type>::operator>>(const int value) const {
	return this->get_value() << value;
}

template<typename int_type>
const int_type IntVal<int_type>::operator>>(const unsigned int value) const {
	return this->get_value() << value;
}

template<typename int_type>
const int_type IntVal<int_type>::operator>>(const long value) const {
	return this->get_value() << value;
}

template<typename int_type>
const int_type IntVal<int_type>::operator>>(const unsigned long value) const {
	return this->get_value() << value;
}

template<typename int_type>
const int_type IntVal<int_type>::operator>>(const short value) const {
	return this->get_value() << value;
}

template<typename int_type>
const int_type IntVal<int_type>::operator>>(const unsigned short value) const {
	return this->get_value() << value;
}

template<typename int_type>
const int_type IntVal<int_type>::operator>>(const char value) const {
	return this->get_value() << value;
}

template<typename int_type>
const int_type IntVal<int_type>::operator>>(const unsigned char value) const {
	return this->get_value() << value;
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
	return ~this->get_value();
}


