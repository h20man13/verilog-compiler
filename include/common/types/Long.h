/*
 * Long.h
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#ifndef LONG_H
#define LONG_H


#include "common/types/Long.h"
#include "common/types/IntVal.h"
#include <string>

class Long: public IntVal<long>{
public:
	 Long(const long value);

	 Long(Long const* &lvalue);

	 operator long();

	 const std::string get_class() const;
};



#endif /* INCLUDE_COMMON_TYPES_NUMBER_H_ */
