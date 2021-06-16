/*
 * NumWrap.h
 *
 *  Created on: Jun 14, 2021
 *      Author: jacob
 */

#ifndef NUMWRAP_H
#define NUMWRAP_H

#include <string>

template<typename num_type>
class NumWrap
{
    num_type value;
public:
    NumWrap(const num_type value): value(value) {}

    operator num_type();

    // basic arithmetic operators
    void operator = (num_type value);

    NumWrap operator + (const num_type value) const;
    NumWrap operator - (const num_type value) const;
    NumWrap operator * (const num_type value) const;
    NumWrap operator / (const num_type value) const;
    NumWrap operator % (const num_type value) const;

	void operator +=(const num_type value);
	void operator -=(const num_type value);
	void operator *=(const num_type value);
	void operator /=(const num_type value);
	void operator %=(const num_type value);

    num_type operator ++ ();
    num_type operator -- ();
    num_type operator ++ (int value);
    num_type operator -- (int value);

    // conditions
    NumWrap<bool> operator == (const num_type value) const;
    NumWrap<bool> operator != (const num_type value) const;
    NumWrap<bool> operator > (const num_type value) const;
    NumWrap<bool> operator < (const num_type value) const;
    NumWrap<bool> operator >= (const num_type value) const;
    NumWrap<bool> operator <= (const num_type value) const;

    num_type to_primitive() const;
    const std::string to_string() const;

};

typedef NumWrap<bool> Boolean;
typedef NumWrap<char> Byte;
typedef NumWrap<unsigned char> UnsignedByte;
typedef NumWrap<short int> Short;
typedef NumWrap<unsigned short int> UnsignedShort;
typedef NumWrap<int> Integer;
typedef NumWrap<unsigned int> UnsignedInteger;
typedef NumWrap<long int> Long;
typedef NumWrap<unsigned long int> UnsignedLong;
typedef NumWrap<double> Double;
typedef NumWrap<unsigned double> UnsignedDouble;
typedef NumWrap<float> Float;
typedef NumWrap<const char*> String;

template<typename num_type> using Number = NumWrap<num_type>;

#endif /* INCLUDE_COMMON_NumWrap_H_ */
