/*
 * Land.h
 *
 *  Created on: Jun 14, 2021
 *      Author: jacob
 */

#ifndef LAND_H
#define LAND_H

#include "ast/expression/binary_operation/Binary.h"
#include "common/NumWrap.h"

template<typename num_type>
class LAnd: public Binary<Number> {
public:
	Number interpret();
	void code_gen();
};

#endif
