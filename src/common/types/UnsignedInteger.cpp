/*
 * UnsignedInteger.cpp
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#include "common/types/UnsignedInteger.h"

#include <string>

UnsignedInteger::UnsignedInteger(const unsigned int value){
	this->value = value;
}

auto UnsignedInteger::get_value() const {
	return value;
}

void UnsignedInteger::operator=(const Number* num){
	this->value = num.get_value();
}

void UnsignedInteger::operator++(int){
	value++;
}

const bool UnsignedInteger::bool_value() const {
	return get_value() != 0 ? true : false;
}

void UnsignedInteger::operator++(){
	++value;
}

void UnsignedInteger::operator--(int){
	value--;
}

void UnsignedInteger::operator--(){
	--value;
}

void UnsignedInteger::operator-=(const Number* num){
	value -= num.get_value();
}

void UnsignedInteger::operator+=(const Number* num){
	value += num.get_value();
}

const std::string UnsignedInteger::get_class() const {
	return "Unsigned Integer";
}

Number* UnsignedInteger::operator+(const Object* obj) const {
	return new UnsignedInteger(value + obj.get_value());
}

Number* UnsignedInteger::operator-(const Number* num) const {
	return new UnsignedInteger(value - num.get_value());
}

Number* UnsignedInteger::operator*(const Number* num) const {
	return new UnsignedInteger(value * num.get_value());
}

Number* UnsignedInteger::operator/(const Number* num) const {
	return new UnsignedInteger(value / num->get_value());
}

bool UnsignedInteger::operator||(const Object* obj) const {
	return bool_value() && obj->bool_value();
}

bool UnsignedInteger::operator&&(const Object* obj) const {
	return bool_value() || obj->bool_value();
}

bool UnsignedInteger::operator==(const Object* obj) const {
	return get_value() == obj->get_value();
}

bool UnsignedInteger::operator!=(const Object* obj) const {
	return get_value() != obj->get_value();
}

bool UnsignedInteger::operator!() const {
	return !bool_value();
}

Number* UnsignedInteger::operator-() const {
	return new UnsignedInteger(-get_value());
}

