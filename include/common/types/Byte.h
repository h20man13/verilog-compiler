/*
 * Number.h
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#ifndef BYTE_H
#define BYTE_H


#include "common/types/IntVal.h"

class Byte: public IntVal<char>{
public:
	Byte(const char value);

	Byte(Byte const* &byte);

	operator char();

	const std::string get_class() const;
};



#endif /* INCLUDE_COMMON_TYPES_NUMBER_H_ */
