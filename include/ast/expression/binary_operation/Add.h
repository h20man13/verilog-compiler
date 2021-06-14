/*
 * Modulo.h
 *
 *  Created on: Jun 14, 2021
 *      Author: jacob
 */

#ifndef ADD_H
#define ADD_H

#include "ast/expression/binary_operation/Binary.h"

class Add: public Binary{
public:
	auto interpret();
	void code_gen();
};

#endif
