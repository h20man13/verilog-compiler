/*
 * Object.cpp
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#include <iostream>
#include "common/types/Object.h"
#include "common/types/String.h"

template<typename val_type>
Object<val_type>::Object(const val_type value){
	this->value = value;
}

template<typename val_type>
Object<val_type>::operator val_type() const {
	return value;
}

template<typename val_type>
const val_type Object<val_type>::get_value() const {
	return value;
}

template<typename val_type>
const std::string Object<val_type>::to_string() const {
	return "" + value;
}

template<typename val_type>
const bool Object<val_type>::operator==(const Object* const obj) const{
	return get_value() == obj->get_value();
}

template<typename val_type>
const bool Object<val_type>::operator==(const double value) const{
	return get_value() == value;
}

template<typename val_type>
const bool Object<val_type>::operator==(const int value) const{
	return get_value() == value;
}

template<typename val_type>
const bool Object<val_type>::operator==(const unsigned int value) const{
	return get_value() == value;
}

template<typename val_type>
const bool Object<val_type>::operator==(const long value) const{
	return get_value() == value;
}

template<typename val_type>
const bool Object<val_type>::operator==(const unsigned long value) const{
	return get_value() == value;
}

template<typename val_type>
const bool Object<val_type>::operator==(const short value) const{
	return get_value() == value;
}

template<typename val_type>
const bool Object<val_type>::operator==(const unsigned short value) const{
	return get_value() == value;
}

template<typename val_type>
const bool Object<val_type>::operator==(const bool value) const{
	return get_value() == value;
}

template<typename val_type>
const bool Object<val_type>::operator==(const std::string value) const{
	return get_value() == value;
}

template<typename val_type>
const bool Object<val_type>::operator!=(const Object* const obj) const {
	return get_value() != obj->get_value();
}

template<typename val_type>
const bool Object<val_type>::operator!=(const double value) const {
	return get_value() != value;
}

template<typename val_type>
const bool Object<val_type>::operator!=(const int value) const {
	return get_value() != value;
}

template<typename val_type>
const bool Object<val_type>::operator!=(const unsigned int value) const {
	return get_value() != value;
}

template<typename val_type>
const bool Object<val_type>::operator!=(const long value) const {
	return get_value() != value;
}

template<typename val_type>
const bool Object<val_type>::operator!=(const unsigned long value) const {
	return get_value() != value;
}

template<typename val_type>
const bool Object<val_type>::operator!=(const short value) const {
	return get_value() != value;
}

template<typename val_type>
const bool Object<val_type>::operator!=(const unsigned short value) const {
	return get_value() != value;
}

template<typename val_type>
const bool Object<val_type>::operator!=(const bool value) const {
	return get_value() != value;
}

template<typename val_type>
const bool Object<val_type>::operator!=(const std::string value) const {
	return get_value() != value;
}

template<typename val_type>
const bool Object<val_type>::operator&&(const Base* obj) const{
	return bool_value() && obj->bool_value();
}

template<typename val_type>
const bool Object<val_type>::operator||(const Object* const obj) const{
	return bool_value() || obj->bool_value();
}

template<typename val_type>
const bool Object<val_type>::operator!() const {
	return !bool_value();
}

template<typename val_type>
const bool Object<val_type>::bool_value() const {
	if(instanceof<String>(this)){
		return get_value() != "";
	} else {
		return (bool)get_value();
	}
}

template<typename val_type>
const val_type Object<val_type>::operator+(const Object* const obj) const{
	return get_value() + obj->get_value();
}

template<typename val_type>
const val_type Object<val_type>::operator+(const double value) const{
	return get_value() + value;
}

template<typename val_type>
const val_type Object<val_type>::operator+(const int value) const{
	return get_value() + value;
}

template<typename val_type>
const val_type Object<val_type>::operator+(const unsigned int value) const{
	return get_value() + value;
}

template<typename val_type>
const val_type Object<val_type>::operator+(const long value) const{
	return get_value() + value;
}

template<typename val_type>
const val_type Object<val_type>::operator+(const unsigned long value) const{
	return get_value() + value;
}

template<typename val_type>
const val_type Object<val_type>::operator+(const short value) const{
	return get_value() + value;
}

template<typename val_type>
const val_type Object<val_type>::operator+(const unsigned short value) const{
	return get_value() + value;
}

template<typename val_type>
const val_type Object<val_type>::operator+(const char value) const{
	return get_value() + value;
}

template<typename val_type>
const val_type Object<val_type>::operator+(const unsigned char value) const{
	return get_value() + value;
}

template<typename val_type>
const val_type Object<val_type>::operator+(const bool value) const{
	return get_value() + value;
}

template<typename val_type>
const val_type Object<val_type>::operator+(const std::string value) const{
	return get_value() + value;
}










