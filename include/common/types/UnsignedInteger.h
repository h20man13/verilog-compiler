/*
 * Number.h
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#ifndef UNSIGNEDINTEGER_H
#define UNSIGNEDINTEGER_H


#include "common/types/Number.h"
#include "common/types/IntVal.h"

class UnsignedInteger: public IntVal<unsigned int>{
public:
	 UnsignedInteger(const unsigned int value);

	 UnsignedInteger(UnsignedInteger const* &integer);

	 operator unsigned int();

	 const std::string get_class() const;
};



#endif /* INCLUDE_COMMON_TYPES_NUMBER_H_ */
