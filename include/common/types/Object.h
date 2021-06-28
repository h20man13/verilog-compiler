/*
 * Object.h
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#ifndef OBJECT_H
#define OBJECT_H

/**
 * Creates an instanceof operator similar to Java that can be used like the example below:
 * instacneof<Child>(c) ...
 * @tparam Base The class that will be compared to
 * @tparam Type Object that will be compared against
 * @param  Type that will be compared to
 * @return
 */

#include <string>
#include "common/types/Base.h"

template<typename val_type>
class Object : public Base{
private:
	 val_type value;
protected:
	 Object(const val_type value);
public:

	 operator val_type();

	 const val_type get_value() const;
	 const std::string to_string() const;

	 const bool operator==(const double value) const;
	 const bool operator==(const int value) const;
	 const bool operator==(const unsigned int value) const;
	 const bool operator==(const long value) const;
	 const bool operator==(const unsigned long value) const;
	 const bool operator==(const short value) const;
	 const bool operator==(const unsigned short value) const;
	 const bool operator==(const char value) const;
	 const bool operator==(const unsigned char value) const;
	 const bool operator==(const bool value) const;
	 const bool operator==(const std::string value) const;

	 const bool operator!=(const double value) const;
	 const bool operator!=(const int value) const;
	 const bool operator!=(const unsigned int value) const;
	 const bool operator!=(const long value) const;
	 const bool operator!=(const unsigned long value) const;
	 const bool operator!=(const short value) const;
	 const bool operator!=(const unsigned short value) const;
	 const bool operator!=(const char value) const;
	 const bool operator!=(const unsigned char value) const;
	 const bool operator!=(const bool value) const;
	 const bool operator!=(const std::string value) const;


	 const bool operator&&(const Object* const obj) const;
	 const bool operator||(const Object* const obj) const;

	 const val_type operator+(const double value) const;
	 const val_type operator+(const int value) const;
	 const val_type operator+(const unsigned int value) const;
	 const val_type operator+(const long value) const;
	 const val_type operator+(const unsigned long value) const;
	 const val_type operator+(const short value) const;
	 const val_type operator+(const unsigned short value) const;
	 const val_type operator+(const char value) const;
	 const val_type operator+(const unsigned char value) const;
	 const val_type operator+(const bool value) const;
	 const val_type operator+(const std::string value) const;


	 void operator=(const val_type value) const;

	 const bool operator!() const;

	 const bool bool_value() const;
	 virtual const std::string get_class() const = 0;
};



#endif /* INCLUDE_COMMON_TYPES_OBJECT_H_ */
