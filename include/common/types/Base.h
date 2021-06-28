/*
 * Base.h
 *
 *  Created on: Jun 25, 2021
 *      Author: jacob
 */

#ifndef BASE_H
#define BASE_H

template<typename Base, typename Type>
inline bool instanceof(const Type&);

template<typename Base, typename Type>
inline bool instanceof(const Type*);

class Base{
public:
	virtual const std::string to_string() const = 0;
	virtual const std::string get_class() const = 0;
	virtual const bool bool_value() const = 0;
};



#endif /* INCLUDE_COMMON_TYPES_BASE_H_ */
