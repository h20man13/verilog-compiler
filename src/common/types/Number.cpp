/*
 * Number.cpp
 *
 *  Created on: Jun 24, 2021
 *      Author: jacob
 */

#include "common/types/Number.h"
#include "common/types/Object.h"

template<typename num_type>
Number<num_type>::Number(const num_type value): Object<num_type>(value) {}

template<typename num_type>
Number<num_type>::operator num_type() const {
	return value;
}

template<typename num_type>
void Number<num_type>::operator+=(const num_type value){
	this->value += value;
}

template<typename num_type>
void Number<num_type>::operator-=(const num_type value){
	this->value -= value;
}

template<typename num_type>
void Number<num_type>::operator++(int){
	value++;
}

template<typename num_type>
void Number<num_type>::operator--(int){
	value--;
}

template<typename num_type>
void Number<num_type>::operator++(){
	++value;
}

template<typename num_type>
void Number<num_type>::operator--(){
	--value;
}

template<typename num_type>
const num_type Number<num_type>::operator-(const num_type value) const {
	return get_value() - value;
}

template<typename num_type>
const num_type Number<num_type>::operator*(const num_type value) const {
	return get_value() * value;
}

template<typename num_type>
const double Number<num_type>::operator/(const num_type value) const {
	return get_value() / value;
}

template<typename num_type>
const num_type Number<num_type>::operator-() const {
	return -get_value();
}

