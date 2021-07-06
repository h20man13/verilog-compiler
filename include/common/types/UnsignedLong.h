/*
 * Number.h
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#ifndef UNSIGNEDLONG_H
#define UNSIGNEDLONG_H


#include "common/types/UnsignedLong.h"
#include "common/types/IntVal.h"

class UnsignedLong: public IntVal<unsigned long>{
public:
	 UnsignedLong(const unsigned long value);

	 UnsignedLong(UnsignedLong const* &l_value);

	 operator unsigned long();

	 const std::string get_class() const;
};



#endif /* INCLUDE_COMMON_TYPES_NUMBER_H_ */
