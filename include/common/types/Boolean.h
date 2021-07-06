/*
 * Object.h
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#ifndef BOOLEAN_H
#define BOOLEAN_H

#include <string>

#include "common/types/Object.h"

class Boolean : public Object<bool>{
public:
	 Boolean(const bool value);
	 Boolean(Boolean const* &bool_value);

	 operator bool();

	 const std::string get_class() const;
};



#endif /* INCLUDE_COMMON_TYPES_OBJECT_H_ */
