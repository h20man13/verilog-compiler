/*
 * UnsignedInteger.cpp
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#include "common/types/Long.h"
#include "common/types/IntVal.h"

#include <string>

Long::Long(const long value) : IntVal(value) {}

Long::Long(Long const* &lvalue): IntVal(lvalue->get_value()){
	if(lvalue != NULL){
		delete lvalue;
		lvalue = this;
	}
}

Long::operator long(){
	return get_value();
}

const std::string Long::get_class() const {
	return "Unsigned Long";
}


