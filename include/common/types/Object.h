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
template<typename Base, typename Type>
inline bool instanceof(const Type&);

template<typename Base, typename Type>
inline bool instanceof(const Type*);

class Object{
public:
	 virtual std::string to_string() const= 0;

	 virtual bool operator==(const Object* obj) const = 0;
	 virtual bool operator!=(const Object* obj) const= 0;
	 virtual bool operator&&(const Object* obj) const= 0;
	 virtual bool operator||(const Object* obj) const= 0;

	 virtual Object* operator+(const Object* obj) const= 0;

	 virtual const bool bool_value() const= 0;
	 virtual const std::string get_class() const= 0;
	 virtual auto get_value() const = 0;
};



#endif /* INCLUDE_COMMON_TYPES_OBJECT_H_ */
