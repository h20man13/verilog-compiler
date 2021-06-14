/*
 * Modulo.h
 *
 *  Created on: Jun 14, 2021
 *      Author: jacob
 */

#ifndef BAnd_H
#define BAnd_H

#include "ast/expression/binary_operation/Binary.h"
#include "common/NumWrap.h"

class BAnd: public Binary<Integer>{
public:
	Integer interpret();
	void code_gen();
};

#endif
