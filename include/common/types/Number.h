/*
 * Number.h
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#ifndef NUMBER_H
#define NUMBER_H

#include "common/types/Object.h"
#include "common/types/Real.h"

class Number: public Object{
public:
	 virtual auto get_value() const= 0;
	 virtual const std::string get_class() const= 0;
	 virtual const bool bool_value() const= 0;
	 virtual std::string to_string() const= 0;

	 virtual void operator=(const Number* number)= 0;

	 virtual void operator+=(const Number* num)= 0;
	 virtual void operator-=(const Number* num)= 0;
	 virtual void operator--(int)= 0;
	 virtual void operator++(int)= 0;
	 virtual void operator--(int)= 0;
	 virtual void operator--()= 0;
	 virtual void operator++()= 0;

	 virtual bool operator==(const Object* obj) const= 0;
	 virtual bool operator!=(const Object* obj) const= 0;
	 virtual bool operator&&(const Object* obj) const= 0;
	 virtual bool operator||(const Object* obj) const= 0;

	 virtual Number* operator+(const Object* obj) const = 0;
	 virtual Number* operator-(const Number* num) const= 0;
	 virtual Number* operator*(const Number* num) const= 0;
	 virtual Number* operator/(const Number* num) const= 0;

	 virtual Number* operator-() const= 0;
	 virtual bool operator!() const= 0;

};



#endif /* INCLUDE_COMMON_TYPES_NUMBER_H_ */
