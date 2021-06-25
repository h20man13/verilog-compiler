/*
 * Number.h
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#ifndef UNSIGNEDLONG_H
#define UNSIGNEDLONG_H


#include "common/types/Number.h"
#include "common/types/IntVal.h"

class UnsignedLong: public IntVal<unsigned long int>{
public:
	 UnsignedLong(const unsigned long int value);
	 const std::string get_class() const;
};



#endif /* INCLUDE_COMMON_TYPES_NUMBER_H_ */
