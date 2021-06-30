/*
 * Number.h
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#ifndef INTVAL_H
#define INTVAL_H


#include "common/types/Number.h"


template<typename int_type>
class IntVal: public Number<int_type>{
public:

	IntVal(const int_type value);

	virtual const std::string get_class() const = 0;

	const int_type operator%(const int value) const;
	const int_type operator%(const unsigned int value) const;
	const int_type operator%(const long value) const;
	const int_type operator%(const unsigned long value) const;
	const int_type operator%(const short value) const;
	const int_type operator%(const unsigned short value) const;
	const int_type operator%(const char value) const;
	const int_type operator%(const unsigned char value) const;

	const int_type operator&(const int value) const;
	const int_type operator&(const unsigned int value) const;
	const int_type operator&(const long value) const;
	const int_type operator&(const unsigned long value) const;
	const int_type operator&(const short value) const;
	const int_type operator&(const unsigned short value) const;
	const int_type operator&(const char value) const;
	const int_type operator&(const unsigned char value) const;

	const int_type operator|(const int value) const;
	const int_type operator|(const unsigned int value) const;
	const int_type operator|(const long value) const;
	const int_type operator|(const unsigned long value) const;
	const int_type operator|(const short value) const;
	const int_type operator|(const unsigned short value) const;
	const int_type operator|(const char value) const;
	const int_type operator|(const unsigned char value) const;

	const int_type operator^(const int value) const;
	const int_type operator^(const unsigned int value) const;
	const int_type operator^(const long value) const;
	const int_type operator^(const unsigned long value) const;
	const int_type operator^(const short value) const;
	const int_type operator^(const unsigned short value) const;
	const int_type operator^(const char value) const;
	const int_type operator^(const unsigned char value) const;

	const int_type operator<<(const int value) const;
	const int_type operator<<(const unsigned int value) const;
	const int_type operator<<(const long value) const;
	const int_type operator<<(const unsigned long value) const;
	const int_type operator<<(const short value) const;
	const int_type operator<<(const unsigned short value) const;
	const int_type operator<<(const char value) const;
	const int_type operator<<(const unsigned char value) const;

	const int_type operator>>(const int value) const;
	const int_type operator>>(const unsigned int value) const;
	const int_type operator>>(const long value) const;
	const int_type operator>>(const unsigned long value) const;
	const int_type operator>>(const short value) const;
	const int_type operator>>(const unsigned short value) const;
	const int_type operator>>(const char value) const;
	const int_type operator>>(const unsigned char value) const;

	void operator|=(const int_type value);
	void operator^=(const int_type value);
	void operator&=(const int_type value);

	void operator<<=(const int_type value);
	void operator>>=(const int_type value);

	const int_type operator~() const;
};



#endif /* INCLUDE_COMMON_TYPES_NUMBER_H_ */
