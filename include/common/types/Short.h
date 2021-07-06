/*
 * Number.h
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#ifndef SHORT_H
#define SHORT_H


#include "common/types/IntVal.h"

class Short: public IntVal<short int>{
public:
	Short(const short int value);

	Short(Short const* &value);

	operator short int();

	const std::string get_class() const;
};



#endif /* INCLUDE_COMMON_TYPES_NUMBER_H_ */
