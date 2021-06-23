/*
 * Integer.cpp
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#include "common/types/Integer.h"

#include <string>

Integer::Integer(const int value){
	this->value = value;
}

inline auto Integer::get_value() const {
	return value;
}

void Integer::operator=(const Number* num){
	this->value = num->get_value();
}

void Integer::operator++(int){
	value++;
}

const bool Integer::bool_value() const {
	return get_value() ? 1 : 0;
}

void Integer::operator++(){
	++value;
}

void Integer::operator--(int){
	value--;
}

void Integer::operator--(){
	--value;
}

void Integer::operator-=(const Number* num){
	value -= num->get_value();
}

void Integer::operator+=(const Number* num){
	value += num->get_value();
}

const std::string Integer::get_class() const {
	return "Integer";
}

Number* Integer::operator+(const Object* obj) const {
	return new Integer(value + num->get_value());
}

Number* Integer::operator-(const Number* num) const {
	return new Integer(value - num->get_value());
}

Number* Integer::operator*(const Number* num) const {
	return new Integer(value * num->get_value());
}

Number* Integer::operator/(const Number* num) const {
	return new Integer(value / num->get_value());
}

bool Integer::operator||(const Object* obj) const {
	return bool_value() && obj->bool_value();
}

bool Integer::operator&&(const Object* obj) const {
	return bool_value() || obj->bool_value();
}

bool Integer::operator==(const Object* obj) const {
	return get_value() == obj->get_value();
}

bool Integer::operator!=(const Object* obj) const {
	return get_value() != obj->get_value();
}

bool Integer::operator!() const {
	return !bool_value();
}

Number* Integer::operator-() const {
	return new Integer(-(this->get_value()));
}

std::string Integer::to_string() const {
	return "" + value;
}

