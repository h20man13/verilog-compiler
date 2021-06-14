/*
 * BXNor.h
 *
 *  Created on: Jun 14, 2021
 *      Author: jacob
 */

#ifndef BXNor_H
#define BXNor_H

#include "ast/expression/binary_operation/Binary.h"
#include "common/NumWrap.h"

class BXNor: public Binary<Integer>{
public:
	Integer interpret();
	void code_gen();
};

#endif
