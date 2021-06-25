/*
 * Number.h
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#ifndef NUMBER_H
#define NUMBER_H

#include "common/types/Object.h"

template<typename num_type>
class Number: public Object<num_type>{
protected:
	Number(const num_type value);
public:

	 operator num_type() const;

	 void operator+=(const num_type value);
	 void operator-=(const num_type value);
	 void operator--(int);
	 void operator++(int);
	 void operator--();
	 void operator++();

	 const num_type operator-(const num_type value) const;
	 const num_type operator*(const num_type value) const;
	 const double operator/(const num_type value) const;
	 const num_type operator-() const;

	 virtual const std::string get_class() const = 0;

};



#endif /* INCLUDE_COMMON_TYPES_NUMBER_H_ */
