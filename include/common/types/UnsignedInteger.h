/*
 * Number.h
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#ifndef UNSIGNEDINTEGER_H
#define UNSIGNEDINTEGER_H


#include "common/types/Number.h"

class UnsignedInteger: public Number{
private:
	unsigned int value;
public:

	 UnsignedInteger(const unsigned int value);

	 auto get_value() const;
	 const std::string get_class() const;
	 const bool bool_value() const;
	 std::string to_string() const;

	 void operator=(const Number *number);

	 void operator+=(const Number *num);
	 void operator-=(const Number *num);
	 void operator--(int);
	 void operator++(int);
	 void operator--(int);
	 void operator--();
	 void operator++();

	 bool operator==(const Object *obj) const;
	 bool operator!=(const Object *obj) const;
	 bool operator&&(const Object *obj) const;
	 bool operator||(const Object *obj) const;

	 Number* operator+(const Object *obj) const;
	 Number* operator-(const Number *num) const;
	 Number* operator*(const Number *num) const;
	 Number* operator/(const Number *num) const;

	 Number* operator-() const;
	 bool operator!() const;

	 UnsignedInteger* operator&(const Number* num) const;
	 UnsignedInteger* operator|(const Number* num) const;
	 UnsignedInteger* operator^(const Number* num) const;

};



#endif /* INCLUDE_COMMON_TYPES_NUMBER_H_ */
