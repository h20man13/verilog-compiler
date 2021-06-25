/*
 * Object.h
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#ifndef STRING_H
#define STRING_H

/**
 * Creates an instanceof operator similar to Java that can be used like the example below:
 * instacneof<Child>(c) ...
 * @tparam Base The class that will be compared to
 * @tparam Type Object that will be compared against
 * @param  Type that will be compared to
 * @return
 */

#include <string>

#include "common/types/Object.h"

class String : public Object<std::string>{
public:
	 String(const std::string value);

	 const std::string get_class() const;
};



#endif /* INCLUDE_COMMON_TYPES_OBJECT_H_ */
