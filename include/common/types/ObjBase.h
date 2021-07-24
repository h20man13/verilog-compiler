/*
 * Base.h
 *
 *  Created on: Jun 25, 2021
 *      Author: jacob
 */

#ifndef OBJBASE_H
#define OBJBASE_H

template<typename Base, typename Type>
bool instanceof(const Type&);

template<typename Base, typename Type>
bool instanceof(const Type*);

#include <string>

class ObjBase{
public:
	virtual ~ObjBase();
	virtual const std::string to_string() const = 0;
	virtual const std::string get_class() const = 0;
	virtual const bool bool_value() const = 0;

	virtual const bool operator==(const double value) const = 0;
	virtual const bool operator==(const int value) const = 0;
	virtual const bool operator==(const unsigned int value) const = 0;
	virtual const bool operator==(const long value) const = 0;
	virtual const bool operator==(const unsigned long value) const = 0;
	virtual const bool operator==(const short value) const = 0;
	virtual const bool operator==(const unsigned short value) const = 0;
	virtual const bool operator==(const char value) const = 0;
	virtual const bool operator==(const unsigned char value) const = 0;
	virtual const bool operator==(const bool value) const = 0;
	virtual const bool operator==(const std::string value) const = 0;

	virtual const bool operator!=(const double value) const = 0;
	virtual const bool operator!=(const int value) const = 0;
	virtual const bool operator!=(const unsigned int value) const = 0;
	virtual const bool operator!=(const long value) const = 0;
	virtual const bool operator!=(const unsigned long value) const = 0;
	virtual const bool operator!=(const short value) const = 0;
	virtual const bool operator!=(const unsigned short value) const = 0;
	virtual const bool operator!=(const char value) const = 0;
	virtual const bool operator!=(const unsigned char value) const = 0;
	virtual const bool operator!=(const bool value) const = 0;
	virtual const bool operator!=(const std::string value) const = 0;

	virtual const bool operator!() const = 0;

	virtual const bool operator&&(const bool value) const = 0;
	virtual const bool operator||(const bool value) const = 0;
};



#endif /* Object Base */
