/*
 * Object.cpp
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#include <iostream>
#include "common/types/Object.h"
#include "common/types/Real.h"
#include "common/types/String.h"
#include "common/types/Integer.h"
#include "common/types/UnsignedInteger.h"

template<typename Base, typename Type>
inline bool instanceof(const Type&) {
   return std::is_base_of<Base, Type>::value;
}

template<typename Base, typename Type>
inline bool instanceof(const Type*) {
   return std::is_base_of<Base, Type>::value;
}

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
const bool Object<val_type>::operator==(const val_type value) const{
	return get_value() == value;
}

template<typename val_type>
const bool Object<val_type>::operator!=(const val_type value) const {
	return get_value() != value;
}

template<typename val_type>
const bool Object<val_type>::operator&&(const Object* const obj) const{
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
const val_type Object<val_type>::operator+(const val_type value) const{
	return get_value() + value;
}










