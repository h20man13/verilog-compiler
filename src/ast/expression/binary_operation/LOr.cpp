/*
 * LOr.cpp
 *
 *  Created on: Jun 16, 2021
 *      Author: jacob
 */

#include "ast/expression/binary_operation/LOr.h"
#include "ast/expression/binary_operation/Binary.h"
#include "ast/expression/Expression.h"
#include "common/types/String.h"
#include "common/types/Real.h"
#include "common/types/Integer.h"
#include "common/types/UnsignedInteger.h"
#include "common/types/Long.h"
#include "common/types/UnsignedLong.h"
#include "common/types/Short.h"
#include "common/types/UnsignedShort.h"
#include "common/types/Byte.h"
#include "common/types/UnsignedByte.h"
#include "common/types/Boolean.h"

void LOr::code_gen() const {
	// TODO -- finish this later
}

ObjBase* const LOr::evaluate() const {
	return new Boolean(this->left->evaluate()->bool_value() || this->right->evaluate()->bool_value());
}


