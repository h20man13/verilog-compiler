/*
 * Number.h
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#ifndef REAL_H
#define REAL_H

#include "common/types/Number.h"

class Real: public Number<double>{
public:
	Real(const double value);

	Real(Real const* &real);

	operator double();

	const std::string get_class() const;
};



#endif /* INCLUDE_COMMON_TYPES_NUMBER_H_ */
