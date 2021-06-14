#include <string>
#include <sstream>
#include "common/NumWrap.h"

template<typename num_type>
NumWrap<num_type>::NumWrap(const num_type value) : value(value){}
template<typename num_type>
NumWrap<num_type>::operator num_type(){
	return value;
}

template<typename num_type>
void NumWrap<num_type>::operator=(const num_type value){
	this->value = value;
}

template<typename num_type>
NumWrap NumWrap<num_type>::operator +(const num_type value) const {
	return NumWrap(this-> value + value);
}

template<typename num_type>
NumWrap NumWrap<num_type>::operator -(const num_type value) const {
	return NumWrap(this-> value - value);
}

template<typename num_type>
NumWrap NumWrap<num_type>::operator *(const num_type value) const {
	return NumWrap(this-> value * value);
}

template<typename num_type>
NumWrap NumWrap<num_type>::operator /(const num_type value) const {
	return NumWrap(this-> value / value);
}

template<typename num_type>
NumWrap NumWrap<num_type>::operator %(const num_type value) const {
	return NumWrap(this-> value % value);
}

template<typename num_type>
void NumWrap<num_type>::operator += (const num_type value){
	this->value += value;
}

template<typename num_type>
void NumWrap<num_type>::operator -= (const num_type value){
	this->value -= value;
}

template<typename num_type>
void NumWrap<num_type>::operator *= (const num_type value){
	this->value *= value;
}

template<typename num_type>
void NumWrap<num_type>::operator /= (const num_type value){
	this->value /= value;
}

template<typename num_type>
void NumWrap<num_type>::operator %= (const num_type value){
	this->value %= value;
}

template<typename num_type>
num_type NumWrap<num_type>::operator ++ (){
	return ++value;
}

template<typename num_type>
num_type NumWrap<num_type>::operator -- (){
	return --value;
}

template<typename num_type>
num_type NumWrap<num_type>::operator ++ (int value){
	return value++;
}

template<typename num_type>
num_type NumWrap<num_type>::operator -- (int value){
	return value--;
}

template<typename num_type>
bool NumWrap<num_type>::operator == (const num_type value) const {
	return this -> value == value;
}

template <typename num_type>
bool NumWrap<num_type>::operator != (const num_type value) const {
	return this -> value != value;
}

template <typename num_type>
bool NumWrap<num_type>::operator > (const num_type value) const {
	return this -> value > value;
}

template <typename num_type>
bool NumWrap<num_type>::operator < (const num_type value) const {
	return this -> value < value;
}

template <typename num_type>
bool NumWrap<num_type>::operator >= (const num_type value) const {
	return this -> value >= value;
}

template <typename num_type>
bool NumWrap<num_type>::operator <= (const num_type value) const {
	return this -> value <= value;
}

template <typename num_type>
num_type NumWrap<num_type>::to_primitive() const {
	return value;
}

template <typename num_type>
const std::string NumWrap<num_type>::to_string() const {
	std::stringstream ss;
	std::string num;

	ss << value;
	ss >> num;

	return num;
}


