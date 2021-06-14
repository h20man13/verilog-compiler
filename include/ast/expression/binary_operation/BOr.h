/*
 * Modulo.h
 *
 *  Created on: Jun 14, 2021
 *      Author: jacob
 */

#ifndef BOr_H
#define BOr_H

#include "ast/expression/binary_operation/Binary.h"
#include "common/NumWrap.h"

class BOr: public Binary<Integer>{
public:
	Integer interpret();
	void code_gen();
};

#endif
