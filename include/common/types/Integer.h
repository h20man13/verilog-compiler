/*
 * Number.h
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#ifndef INTEGER_H
#define INTEGER_H


#include "common/types/IntVal.h"

class Integer: public IntVal<int>{
public:
	Integer(const int value);

	Integer(Integer const* &integer);

	operator int();

	const std::string get_class() const;
};



#endif /* INCLUDE_COMMON_TYPES_NUMBER_H_ */
