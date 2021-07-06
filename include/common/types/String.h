/*
 * Object.h
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#ifndef STRING_H
#define STRING_H

#include <string>

#include "common/types/Object.h"

class String : public Object<std::string>{
public:
	 String(const std::string value);

	 String(String const* &string);

	 operator std::string();

	 const std::string get_class() const;
};



#endif /* INCLUDE_COMMON_TYPES_OBJECT_H_ */
