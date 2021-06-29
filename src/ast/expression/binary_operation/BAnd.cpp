/*
 * BAnd.cpp
 *
 *  Created on: Jun 16, 2021
 *      Author: jacob
 */

#include "ast/expression/binary_operation/BAnd.h"
#include "common/types/ObjBase.h"
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

void BAnd::code_gen() const {
	// TODO -- finish this later
}

ObjBase* const BAnd::evaluate() const {

	ObjBase *const left = this->left->evaluate();
	ObjBase *const right = this->right->evaluate();

	if (instanceof<Integer>(left)) {
		Integer *int_left = (Integer* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Integer(*int_left & *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Integer(*int_left & *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Integer(*int_left & *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Integer(*int_left & *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Integer(*int_left & *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Integer(*int_left & *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Integer(*int_left & *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Integer(*int_left & *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Integer(*int_left & ((*bool_right) ? 1 : 0));

		} else {
			return NULL;
		}
	} else if (instanceof<UnsignedInteger>(left)) {
		UnsignedInteger *int_left = (UnsignedInteger* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new UnsignedInteger(*int_left & *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedInteger(*int_left & *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new UnsignedInteger(*int_left & *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedInteger(*int_left & *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new UnsignedInteger(*int_left & *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new UnsignedInteger(*int_left & *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new UnsignedInteger(*int_left & *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new UnsignedInteger(*int_left & *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new UnsignedInteger(*int_left & *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<Long>(left)) {
		Long *long_left = (Long* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Long(*long_left & *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Long(*long_left & *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Long(*long_left & *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Long(*long_left & *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Long(*long_left & *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Long(*long_left & *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Long(*long_left & *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Long(*long_left & *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Long(*long_left & *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<UnsignedLong>(left)) {
		UnsignedLong *long_left = (UnsignedLong* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new UnsignedLong(*long_left & *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedLong(*long_left & *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new UnsignedLong(*long_left & *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedLong(*long_left & *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new UnsignedLong(*long_left & *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new UnsignedLong(*long_left & *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new UnsignedLong(*long_left & *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new UnsignedLong(*long_left & *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new UnsignedLong(*long_left & *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<Short>(left)) {
		Short *long_left = (Short* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Short(*long_left & *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Short(*long_left & *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Short(*long_left & *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Short(*long_left & *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Short(*long_left & *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Short(*long_left & *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Short(*long_left & *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Short(*long_left & *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Short(*long_left & *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<UnsignedShort>(left)) {
		UnsignedShort *long_left = (UnsignedShort* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new UnsignedShort(*long_left & *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedShort(*long_left & *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new UnsignedShort(*long_left & *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedShort(*long_left & *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new UnsignedShort(*long_left & *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new UnsignedShort(*long_left & *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new UnsignedShort(*long_left & *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new UnsignedShort(*long_left & *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new UnsignedShort(*long_left & *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<Byte>(left)) {
		Byte *long_left = (Byte* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Byte(*long_left & *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Byte(*long_left & *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Byte(*long_left & *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Byte(*long_left & *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Byte(*long_left & *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Byte(*long_left & *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Byte(*long_left & *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Byte(*long_left & *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Byte(*long_left & *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<UnsignedByte>(left)) {
		UnsignedByte *long_left = (UnsignedByte* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new UnsignedByte(*long_left & *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedByte(*long_left & *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new UnsignedByte(*long_left & *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedByte(*long_left & *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new UnsignedByte(*long_left & *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new UnsignedByte(*long_left & *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new UnsignedByte(*long_left & *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new UnsignedByte(*long_left & *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new UnsignedByte(*long_left & *bool_right);

		} else {
			return NULL;
		}
	} else {
		return NULL;
	}
}


