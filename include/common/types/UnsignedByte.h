/*
 * Number.h
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#ifndef UNSIGNEDBYTE_H
#define UNSIGNEDBYTE_H


#include "common/types/IntVal.h"

class UnsignedByte: public IntVal<unsigned char>{
public:
	UnsignedByte(const unsigned char value);

	UnsignedByte(UnsignedByte const* &byte);

	operator unsigned char();

	const std::string get_class() const;
};



#endif /* INCLUDE_COMMON_TYPES_NUMBER_H_ */
