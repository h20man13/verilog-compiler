/*
 * Modulo.h
 *
 *  Created on: Jun 14, 2021
 *      Author: jacob
 */

#ifndef DIV_H
#define DIV_H

#include "ast/expression/binary_operation/Binary.h"
#include "common/NumWrap.h"

template <class num_type>
class Div: public Binary<Number>{
public:
	Number interpret();
	void code_gen();
};

#endif
