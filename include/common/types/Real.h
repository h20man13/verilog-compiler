/*
 * Number.h
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#ifndef REAL_H
#define REAL_H


#include "common/types/Number.h"

class Real: public Number{
private:
	double value;
public:

	Real(const double value);

	auto get_value() const;
	const bool bool_value() const;
    const std::string get_class() const;
    std::string to_string() const;

    void operator=(const Number* num);

	void operator+=(const Number* num);
	void operator-=(const Number* num);
	void operator++(int);
	void operator--(int);
	void operator--();
	void operator++();

	bool operator==(const Object* obj) const;
	bool operator!=(const Object* obj) const;
	bool operator&&(const Object* obj) const;
	bool operator||(const Object* obj) const;


	Number* operator+(const Object* obj) const;
	Number* operator-(const Number* num) const;
	Number* operator*(const Number* num) const;
	Number* operator/(const Number* num) const;

	bool operator!() const;
	Number* operator-() const;
};



#endif /* INCLUDE_COMMON_TYPES_NUMBER_H_ */
