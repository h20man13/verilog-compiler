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

template<typename val_type>
class Object{
private:
	 val_type value;
protected:
	 Object(const val_type value);
public:

	 const val_type get_value() const;
	 const std::string to_string() const;

	 operator val_type() const;

	 const bool operator==(const val_type value) const;
	 const bool operator!=(const val_type value) const;
	 const bool operator&&(const Object* const obj) const;
	 const bool operator||(const Object* const obj) const;

	 const val_type operator+(const val_type value) const;
	 void operator=(const val_type value) const;

	 const bool operator!() const;

	 const bool bool_value() const;
	 virtual const std::string get_class() const = 0;
};



#endif /* INCLUDE_COMMON_TYPES_OBJECT_H_ */
