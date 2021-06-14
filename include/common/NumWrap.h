/*
 * NumWrap.h
 *
 *  Created on: Jun 14, 2021
 *      Author: jacob
 */

#ifndef NUMWRAP_H
#define NUMWRAP_H

#include <string>

#define Number NumWrap<num_type>

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
    bool operator == (const num_type value) const;
    bool operator != (const num_type value) const;
    bool operator > (const num_type value) const;
    bool operator < (const num_type value) const;
    bool operator >= (const num_type value) const;
    bool operator <= (const num_type value) const;

    num_type to_primitive() const;
    const std::string to_string() const;

};

typedef NumWrap<int> Integer;
typedef NumWrap<double> Double;
typedef NumWrap<float> Float;
}



#endif /* INCLUDE_COMMON_NumWrap_H_ */
