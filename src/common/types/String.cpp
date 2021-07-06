/*
 * String.cpp
 *
 *  Created on: Jun 24, 2021
 *      Author: jacob
 */

#include "common/types/String.h"
#include "common/types/Object.h"

String::String(const std::string value) : Object(value) {}

String::String(String const* &string): Object(string->get_value()){
	if(string != NULL){
		delete string;
		string = this;
	}
}

String::operator std::string(){
	return get_value();
}
const std::string String::get_class() const {
	return "String";
}

