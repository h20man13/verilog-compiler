/*
 * String.cpp
 *
 *  Created on: Jun 24, 2021
 *      Author: jacob
 */

#include "common/types/Boolean.h"
#include "common/types/Object.h"

Boolean::Boolean(const bool value) : Object(value) {}

Boolean::Boolean(Boolean const* &bool_value): Object(bool_value->get_value()){
	if(bool_value != NULL){
		delete bool_value;
		bool_value = this;
	}
}

Boolean::operator bool(){
	return get_value();
}

const std::string Boolean::get_class() const {
	return "Boolean";
}

