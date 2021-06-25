/*
 * Number.h
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#ifndef LONG_H
#define LONG_H


#include "common/types/Number.h"
#include "common/types/IntVal.h"

class Long: public IntVal<long int>{
public:
	 Long(const long int value);
	 const std::string get_class() const;
};



#endif /* INCLUDE_COMMON_TYPES_NUMBER_H_ */
