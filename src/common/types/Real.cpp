/*
 * Real.cpp
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#include "common/types/Real.h"

#include <string>

Real::Real(const double value){
	this->value = value;
}

void Real::operator=(const Number* num){
	this->value = num->get_value();
}

auto Real::get_value() const {
	return value;
}

void Real::operator++(int){
	value++;
}

void Real::operator++(){
	++value;
}

void Real::operator--(int){
	value--;
}

void Real::operator--(){
	--value;
}

void Real::operator-=(const Number* num){
	value -= num->get_value();
}

void Real::operator+=(const Number* num){
	value += num->get_value();
}

const std::string Real::get_class() const {
	return "Real";
}

Number* Real::operator+(const Object* obj) const {
	return new Real(value + num->get_value());
}

Number* Real::operator-(const Number* num) const {
	return new Real(value - num->get_value());
}

Number* Real::operator*(const Number* num) const {
	return new Real(value * num->get_value());
}

Number* Real::operator/(const Number* num) const {
	return new Real(value / num->get_value());
}

bool Real::operator==(const Object* obj) const {
	return get_value() == obj->get_value();
}

bool Real::operator!=(const Object* obj) const {
	return get_value() != obj->get_value();
}

bool Real::operator&&(const Object* obj) const {
	return bool_value() == obj->bool_value();
}

bool Real::operator||(const Object* obj) const {
	return bool_value() != obj->bool_value();
}

bool Real::operator!() const {
	return !bool_value();
}

const bool Real::bool_value() const {
	return value != 0 ? true : false;
}

std::string Real::to_string() const {
	return "" + value;
}

Number* Real::operator-() const {
	return new Real(-get_value());
}

