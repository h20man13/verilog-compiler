/*
 * Modulo.h
 *
 *  Created on: Jun 14, 2021
 *      Author: jacob
 */

#ifndef BNor_H
#define BNor_H

#include "ast/expression/binary_operation/Binary.h"

class BNor: public Binary{
public:
	auto interpret();
	void code_gen();
};

#endif
