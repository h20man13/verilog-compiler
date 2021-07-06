/*
 * Number.h
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#ifndef UNSIGNEDSHORT_H
#define UNSIGNEDSHORT_H


#include "common/types/IntVal.h"

class UnsignedShort: public IntVal<unsigned short int>{
public:
	UnsignedShort(const unsigned short int value);

	UnsignedShort(UnsignedShort const* &s_value);

	operator unsigned short();

	const std::string get_class() const;
};



#endif /* INCLUDE_COMMON_TYPES_NUMBER_H_ */
