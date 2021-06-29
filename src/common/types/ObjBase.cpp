/*
 * Object.cpp
 *
 *  Created on: Jun 18, 2021
 *      Author: jacob
 */

#include <iostream>
#include "common/types/ObjBase.h"

template<typename Base, typename Type>
bool instanceof(const Type&) {
   return std::is_base_of<Base, Type>::value;
}

template<typename Base, typename Type>
bool instanceof(const Type*) {
   return std::is_base_of<Base, Type>::value;
}
