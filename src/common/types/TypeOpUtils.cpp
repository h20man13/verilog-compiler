/*
 * TypeOpUtils.cpp
 *
 *  Created on: Jun 29, 2021
 *      Author: jacob
 */

#include "common/types/TypeOpUtils.h"
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

ObjBase* const add(const ObjBase *const left,
		const ObjBase *const right) {
	if (instanceof<String>(left)) {

		return new String(left->to_string() + right->to_string());

	} else if (instanceof<Integer>(left)) {
		Integer *int_left = (Integer* const ) left;

		if (instanceof<Real>(right)) {

			Real *real_right = (Real* const ) right;
			return new Integer(*int_left + *real_right);

		} else if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Integer(*int_left + *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Integer(*int_left + *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Integer(*int_left + *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Integer(*int_left + *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Integer(*int_left + *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Integer(*int_left + *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Integer(*int_left + *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Integer(*int_left + *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Integer(*int_left + ((*bool_right) ? 1 : 0));

		} else {
			return NULL;
		}
	} else if (instanceof<UnsignedInteger>(left)) {
		UnsignedInteger *int_left = (UnsignedInteger* const ) left;

		if (instanceof<Real>(right)) {

			Real *real_right = (Real* const ) right;
			return new UnsignedInteger(*int_left + *real_right);

		} else if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new UnsignedInteger(*int_left + *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedInteger(*int_left + *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new UnsignedInteger(*int_left + *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedInteger(*int_left + *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new UnsignedInteger(*int_left + *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new UnsignedInteger(*int_left + *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new UnsignedInteger(*int_left + *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new UnsignedInteger(*int_left + *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new UnsignedInteger(*int_left + *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<Long>(left)) {
		Long *long_left = (Long* const ) left;

		if (instanceof<Real>(right)) {

			Real *real_right = (Real* const ) right;
			return new Long((long) (*long_left + *real_right));

		} else if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Long(*long_left + *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Long(*long_left + *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Long(*long_left + *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Long(*long_left + *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Long(*long_left + *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Long(*long_left + *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Long(*long_left + *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Long(*long_left + *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Long(*long_left + *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<UnsignedLong>(left)) {
		UnsignedLong *long_left = (UnsignedLong* const ) left;

		if (instanceof<Real>(right)) {

			Real *real_right = (Real* const ) right;
			return new UnsignedLong(*long_left + *real_right);

		} else if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new UnsignedLong(*long_left + *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedLong(*long_left + *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new UnsignedLong(*long_left + *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedLong(*long_left + *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new UnsignedLong(*long_left + *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new UnsignedLong(*long_left + *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new UnsignedLong(*long_left + *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new UnsignedLong(*long_left + *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new UnsignedLong(*long_left + *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<Short>(left)) {
		Short *long_left = (Short* const ) left;

		if (instanceof<Real>(right)) {

			Real *real_right = (Real* const ) right;
			return new Short(*long_left + *real_right);

		} else if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Short(*long_left + *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Short(*long_left + *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Short(*long_left + *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Short(*long_left + *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Short(*long_left + *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Short(*long_left + *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Short(*long_left + *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Short(*long_left + *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Short(*long_left + *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<UnsignedShort>(left)) {
		UnsignedShort *long_left = (UnsignedShort* const ) left;

		if (instanceof<Real>(right)) {

			Real *real_right = (Real* const ) right;
			return new UnsignedShort(*long_left + *real_right);

		} else if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new UnsignedShort(*long_left + *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedShort(*long_left + *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new UnsignedShort(*long_left + *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedShort(*long_left + *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new UnsignedShort(*long_left + *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new UnsignedShort(*long_left + *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new UnsignedShort(*long_left + *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new UnsignedShort(*long_left + *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new UnsignedShort(*long_left + *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<Byte>(left)) {
		Byte *long_left = (Byte* const ) left;

		if (instanceof<Real>(right)) {

			Real *real_right = (Real* const ) right;
			return new Byte(*long_left + *real_right);

		} else if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Byte(*long_left + *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Byte(*long_left + *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Byte(*long_left + *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Byte(*long_left + *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Byte(*long_left + *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Byte(*long_left + *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Byte(*long_left + *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Byte(*long_left + *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Byte(*long_left + *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<UnsignedByte>(left)) {
		UnsignedByte *long_left = (UnsignedByte* const ) left;

		if (instanceof<Real>(right)) {

			Real *real_right = (Real* const ) right;
			return new UnsignedByte(*long_left + *real_right);

		} else if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new UnsignedByte(*long_left + *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedByte(*long_left + *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new UnsignedByte(*long_left + *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedByte(*long_left + *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new UnsignedByte(*long_left + *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new UnsignedByte(*long_left + *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new UnsignedByte(*long_left + *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new UnsignedByte(*long_left + *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new UnsignedByte(*long_left + *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<Boolean>(left)) {
		Boolean *bool_left = (Boolean* const ) left;
		bool b_right = right->bool_value();

		return new Boolean(*bool_left + b_right);
	} else {
		return NULL;
	}
}

ObjBase* const sub(const ObjBase *const left,
		const ObjBase *const right) {
	if (instanceof<Integer>(left)) {
		Integer *int_left = (Integer* const ) left;

		if (instanceof<Real>(right)) {

			Real *real_right = (Real* const ) right;
			return new Integer(*int_left - *real_right);

		} else if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Integer(*int_left - *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Integer(*int_left - *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Integer(*int_left - *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Integer(*int_left - *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Integer(*int_left - *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Integer(*int_left - *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Integer(*int_left - *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Integer(*int_left - *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Integer(*int_left - ((*bool_right) ? 1 : 0));

		} else {
			return NULL;
		}
	} else if (instanceof<UnsignedInteger>(left)) {
		UnsignedInteger *int_left = (UnsignedInteger* const ) left;

		if (instanceof<Real>(right)) {

			Real *real_right = (Real* const ) right;
			return new UnsignedInteger(*int_left - *real_right);

		} else if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new UnsignedInteger(*int_left - *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedInteger(*int_left - *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new UnsignedInteger(*int_left - *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedInteger(*int_left - *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new UnsignedInteger(*int_left - *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new UnsignedInteger(*int_left - *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new UnsignedInteger(*int_left - *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new UnsignedInteger(*int_left - *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new UnsignedInteger(*int_left - *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<Long>(left)) {
		Long *long_left = (Long* const ) left;

		if (instanceof<Real>(right)) {

			Real *real_right = (Real* const ) right;
			return new Long((long) (*long_left - *real_right));

		} else if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Long(*long_left - *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Long(*long_left - *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Long(*long_left - *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Long(*long_left - *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Long(*long_left - *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Long(*long_left - *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Long(*long_left - *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Long(*long_left - *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Long(*long_left - *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<UnsignedLong>(left)) {
		UnsignedLong *long_left = (UnsignedLong* const ) left;

		if (instanceof<Real>(right)) {

			Real *real_right = (Real* const ) right;
			return new UnsignedLong(*long_left - *real_right);

		} else if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new UnsignedLong(*long_left - *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedLong(*long_left - *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new UnsignedLong(*long_left - *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedLong(*long_left - *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new UnsignedLong(*long_left - *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new UnsignedLong(*long_left - *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new UnsignedLong(*long_left - *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new UnsignedLong(*long_left - *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new UnsignedLong(*long_left - *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<Short>(left)) {
		Short *long_left = (Short* const ) left;

		if (instanceof<Real>(right)) {

			Real *real_right = (Real* const ) right;
			return new Short(*long_left - *real_right);

		} else if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Short(*long_left - *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Short(*long_left - *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Short(*long_left - *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Short(*long_left - *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Short(*long_left - *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Short(*long_left - *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Short(*long_left - *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Short(*long_left - *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Short(*long_left - *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<UnsignedShort>(left)) {
		UnsignedShort *long_left = (UnsignedShort* const ) left;

		if (instanceof<Real>(right)) {

			Real *real_right = (Real* const ) right;
			return new UnsignedShort(*long_left - *real_right);

		} else if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new UnsignedShort(*long_left - *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedShort(*long_left - *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new UnsignedShort(*long_left - *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedShort(*long_left - *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new UnsignedShort(*long_left - *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new UnsignedShort(*long_left - *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new UnsignedShort(*long_left - *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new UnsignedShort(*long_left - *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new UnsignedShort(*long_left - *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<Byte>(left)) {
		Byte *long_left = (Byte* const ) left;

		if (instanceof<Real>(right)) {

			Real *real_right = (Real* const ) right;
			return new Byte(*long_left - *real_right);

		} else if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Byte(*long_left - *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Byte(*long_left - *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Byte(*long_left - *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Byte(*long_left - *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Byte(*long_left - *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Byte(*long_left - *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Byte(*long_left - *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Byte(*long_left - *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Byte(*long_left - *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<UnsignedByte>(left)) {
		UnsignedByte *long_left = (UnsignedByte* const ) left;

		if (instanceof<Real>(right)) {

			Real *real_right = (Real* const ) right;
			return new UnsignedByte(*long_left - *real_right);

		} else if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new UnsignedByte(*long_left - *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedByte(*long_left - *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new UnsignedByte(*long_left - *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedByte(*long_left - *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new UnsignedByte(*long_left - *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new UnsignedByte(*long_left - *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new UnsignedByte(*long_left - *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new UnsignedByte(*long_left - *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new UnsignedByte(*long_left - *bool_right);

		} else {
			return NULL;
		}
	} else {
		return NULL;
	}
}

ObjBase* const mult(const ObjBase *const left,
		const ObjBase *const right) {
	if (instanceof<Integer>(left)) {
		Integer *int_left = (Integer* const ) left;

		if (instanceof<Real>(right)) {

			Real *real_right = (Real* const ) right;
			return new Integer(*int_left * *real_right);

		} else if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Integer(*int_left * *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Integer(*int_left * *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Integer(*int_left * *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Integer(*int_left * *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Integer(*int_left * *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Integer(*int_left * *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Integer(*int_left * *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Integer(*int_left * *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Integer(*int_left * ((*bool_right) ? 1 : 0));

		} else {
			return NULL;
		}
	} else if (instanceof<UnsignedInteger>(left)) {
		UnsignedInteger *int_left = (UnsignedInteger* const ) left;

		if (instanceof<Real>(right)) {

			Real *real_right = (Real* const ) right;
			return new UnsignedInteger(*int_left * *real_right);

		} else if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new UnsignedInteger(*int_left * *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedInteger(*int_left * *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new UnsignedInteger(*int_left * *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedInteger(*int_left * *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new UnsignedInteger(*int_left * *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new UnsignedInteger(*int_left * *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new UnsignedInteger(*int_left * *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new UnsignedInteger(*int_left * *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new UnsignedInteger(*int_left * *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<Long>(left)) {
		Long *long_left = (Long* const ) left;

		if (instanceof<Real>(right)) {

			Real *real_right = (Real* const ) right;
			return new Long((long) (*long_left * *real_right));

		} else if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Long(*long_left * *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Long(*long_left * *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Long(*long_left * *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Long(*long_left * *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Long(*long_left * *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Long(*long_left * *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Long(*long_left * *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Long(*long_left * *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Long(*long_left * *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<UnsignedLong>(left)) {
		UnsignedLong *long_left = (UnsignedLong* const ) left;

		if (instanceof<Real>(right)) {

			Real *real_right = (Real* const ) right;
			return new UnsignedLong(*long_left * *real_right);

		} else if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new UnsignedLong(*long_left * *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedLong(*long_left * *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new UnsignedLong(*long_left * *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedLong(*long_left * *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new UnsignedLong(*long_left * *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new UnsignedLong(*long_left * *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new UnsignedLong(*long_left * *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new UnsignedLong(*long_left * *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new UnsignedLong(*long_left * *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<Short>(left)) {
		Short *long_left = (Short* const ) left;

		if (instanceof<Real>(right)) {

			Real *real_right = (Real* const ) right;
			return new Short(*long_left * *real_right);

		} else if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Short(*long_left * *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Short(*long_left * *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Short(*long_left * *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Short(*long_left * *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Short(*long_left * *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Short(*long_left * *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Short(*long_left * *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Short(*long_left * *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Short(*long_left * *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<UnsignedShort>(left)) {
		UnsignedShort *long_left = (UnsignedShort* const ) left;

		if (instanceof<Real>(right)) {

			Real *real_right = (Real* const ) right;
			return new UnsignedShort(*long_left * *real_right);

		} else if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new UnsignedShort(*long_left * *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedShort(*long_left * *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new UnsignedShort(*long_left * *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedShort(*long_left * *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new UnsignedShort(*long_left * *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new UnsignedShort(*long_left * *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new UnsignedShort(*long_left * *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new UnsignedShort(*long_left * *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new UnsignedShort(*long_left * *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<Byte>(left)) {
		Byte *long_left = (Byte* const ) left;

		if (instanceof<Real>(right)) {

			Real *real_right = (Real* const ) right;
			return new Byte(*long_left * *real_right);

		} else if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Byte(*long_left * *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Byte(*long_left * *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Byte(*long_left * *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Byte(*long_left * *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Byte(*long_left * *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Byte(*long_left * *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Byte(*long_left * *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Byte(*long_left * *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Byte(*long_left * *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<UnsignedByte>(left)) {
		UnsignedByte *long_left = (UnsignedByte* const ) left;

		if (instanceof<Real>(right)) {

			Real *real_right = (Real* const ) right;
			return new UnsignedByte(*long_left * *real_right);

		} else if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new UnsignedByte(*long_left * *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedByte(*long_left * *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new UnsignedByte(*long_left * *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedByte(*long_left * *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new UnsignedByte(*long_left * *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new UnsignedByte(*long_left * *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new UnsignedByte(*long_left * *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new UnsignedByte(*long_left * *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new UnsignedByte(*long_left * *bool_right);

		} else {
			return NULL;
		}
	} else {
		return NULL;
	}
}

ObjBase* const div(const ObjBase *const left,
		const ObjBase *const right) {
	if (instanceof<Integer>(left)) {
		Integer *int_left = (Integer* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Real(*int_left / *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Real(*int_left / *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Real(*int_left / *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Real(*int_left / *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Real(*int_left / *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Real(*int_left / *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Real(*int_left / *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Real(*int_left / *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Real(*int_left / ((*bool_right) ? 1 : 0));

		} else {
			return NULL;
		}
	} else if (instanceof<UnsignedInteger>(left)) {
		UnsignedInteger *int_left = (UnsignedInteger* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Real(*int_left / *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Real(*int_left / *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Real(*int_left / *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Real(*int_left / *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Real(*int_left / *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Real(*int_left / *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Real(*int_left / *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Real(*int_left / *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Real(*int_left / *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<Long>(left)) {
		Long *long_left = (Long* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Real(*long_left / *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Real(*long_left / *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Real(*long_left / *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Real(*long_left / *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Real(*long_left / *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Real(*long_left / *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Real(*long_left / *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Real(*long_left / *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Real(*long_left / *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<UnsignedLong>(left)) {
		UnsignedLong *long_left = (UnsignedLong* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Real(*long_left / *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Real(*long_left / *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Real(*long_left / *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Real(*long_left / *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Real(*long_left / *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Real(*long_left / *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Real(*long_left / *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Real(*long_left / *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Real(*long_left / *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<Short>(left)) {
		Short *long_left = (Short* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Real(*long_left / *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Real(*long_left / *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Real(*long_left / *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Real(*long_left / *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Real(*long_left / *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Real(*long_left / *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Real(*long_left / *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Real(*long_left / *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Real(*long_left / *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<UnsignedShort>(left)) {
		UnsignedShort *long_left = (UnsignedShort* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Real(*long_left / *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Real(*long_left / *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Real(*long_left / *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Real(*long_left / *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Real(*long_left / *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Real(*long_left / *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Real(*long_left / *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Real(*long_left / *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Real(*long_left / *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<Byte>(left)) {
		Byte *long_left = (Byte* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Real(*long_left / *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Real(*long_left / *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Real(*long_left / *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Real(*long_left / *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Real(*long_left / *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Real(*long_left / *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Real(*long_left / *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Real(*long_left / *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Real(*long_left / *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<UnsignedByte>(left)) {
		UnsignedByte *long_left = (UnsignedByte* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Real(*long_left / *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Real(*long_left / *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Real(*long_left / *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Real(*long_left / *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Real(*long_left / *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Real(*long_left / *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Real(*long_left / *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Real(*long_left / *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Real(*long_left / *bool_right);

		} else {
			return NULL;
		}
	} else {
		return NULL;
	}
}

ObjBase* const mod(const ObjBase *const left,
		const ObjBase *const right) {
	if (instanceof<Integer>(left)) {
		Integer *int_left = (Integer* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Integer(*int_left % *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Integer(*int_left % *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Integer(*int_left % *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Integer(*int_left % *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Integer(*int_left % *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Integer(*int_left % *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Integer(*int_left % *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Integer(*int_left % *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Integer(*int_left % ((*bool_right) ? 1 : 0));

		} else {
			return NULL;
		}
	} else if (instanceof<UnsignedInteger>(left)) {
		UnsignedInteger *int_left = (UnsignedInteger* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new UnsignedInteger(*int_left % *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedInteger(*int_left % *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new UnsignedInteger(*int_left % *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedInteger(*int_left % *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new UnsignedInteger(*int_left % *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new UnsignedInteger(*int_left % *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new UnsignedInteger(*int_left % *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new UnsignedInteger(*int_left % *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new UnsignedInteger(*int_left % *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<Long>(left)) {
		Long *long_left = (Long* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Long(*long_left % *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Long(*long_left % *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Long(*long_left % *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Long(*long_left % *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Long(*long_left % *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Long(*long_left % *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Long(*long_left % *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Long(*long_left % *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Long(*long_left % *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<UnsignedLong>(left)) {
		UnsignedLong *long_left = (UnsignedLong* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new UnsignedLong(*long_left % *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedLong(*long_left % *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new UnsignedLong(*long_left % *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedLong(*long_left % *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new UnsignedLong(*long_left % *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new UnsignedLong(*long_left % *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new UnsignedLong(*long_left % *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new UnsignedLong(*long_left % *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new UnsignedLong(*long_left % *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<Short>(left)) {
		Short *long_left = (Short* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Short(*long_left % *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Short(*long_left % *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Short(*long_left % *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Short(*long_left % *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Short(*long_left % *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Short(*long_left % *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Short(*long_left % *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Short(*long_left % *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Short(*long_left % *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<UnsignedShort>(left)) {
		UnsignedShort *long_left = (UnsignedShort* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new UnsignedShort(*long_left % *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedShort(*long_left % *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new UnsignedShort(*long_left % *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedShort(*long_left % *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new UnsignedShort(*long_left % *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new UnsignedShort(*long_left % *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new UnsignedShort(*long_left % *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new UnsignedShort(*long_left % *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new UnsignedShort(*long_left % *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<Byte>(left)) {
		Byte *long_left = (Byte* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Byte(*long_left % *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Byte(*long_left % *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Byte(*long_left % *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Byte(*long_left % *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Byte(*long_left % *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Byte(*long_left % *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Byte(*long_left % *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Byte(*long_left % *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Byte(*long_left % *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<UnsignedByte>(left)) {
		UnsignedByte *long_left = (UnsignedByte* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new UnsignedByte(*long_left % *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedByte(*long_left % *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new UnsignedByte(*long_left % *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedByte(*long_left % *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new UnsignedByte(*long_left % *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new UnsignedByte(*long_left % *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new UnsignedByte(*long_left % *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new UnsignedByte(*long_left % *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new UnsignedByte(*long_left % *bool_right);

		} else {
			return NULL;
		}
	} else {
		return NULL;
	}
}

ObjBase* const band(const ObjBase *const left,
		const ObjBase *const right) {
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

ObjBase* const bor(const ObjBase *const left,
		const ObjBase *const right) {
	if (instanceof<Integer>(left)) {
		Integer *int_left = (Integer* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Integer(*int_left | *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Integer(*int_left | *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Integer(*int_left | *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Integer(*int_left | *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Integer(*int_left | *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Integer(*int_left | *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Integer(*int_left | *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Integer(*int_left | *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Integer(*int_left | ((*bool_right) ? 1 : 0));

		} else {
			return NULL;
		}
	} else if (instanceof<UnsignedInteger>(left)) {
		UnsignedInteger *int_left = (UnsignedInteger* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new UnsignedInteger(*int_left | *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedInteger(*int_left | *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new UnsignedInteger(*int_left | *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedInteger(*int_left | *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new UnsignedInteger(*int_left | *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new UnsignedInteger(*int_left | *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new UnsignedInteger(*int_left | *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new UnsignedInteger(*int_left | *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new UnsignedInteger(*int_left | *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<Long>(left)) {
		Long *long_left = (Long* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Long(*long_left | *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Long(*long_left | *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Long(*long_left | *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Long(*long_left | *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Long(*long_left | *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Long(*long_left | *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Long(*long_left | *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Long(*long_left | *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Long(*long_left | *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<UnsignedLong>(left)) {
		UnsignedLong *long_left = (UnsignedLong* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new UnsignedLong(*long_left | *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedLong(*long_left | *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new UnsignedLong(*long_left | *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedLong(*long_left | *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new UnsignedLong(*long_left | *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new UnsignedLong(*long_left | *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new UnsignedLong(*long_left | *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new UnsignedLong(*long_left | *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new UnsignedLong(*long_left | *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<Short>(left)) {
		Short *long_left = (Short* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Short(*long_left | *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Short(*long_left | *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Short(*long_left | *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Short(*long_left | *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Short(*long_left | *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Short(*long_left | *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Short(*long_left | *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Short(*long_left | *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Short(*long_left | *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<UnsignedShort>(left)) {
		UnsignedShort *long_left = (UnsignedShort* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new UnsignedShort(*long_left | *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedShort(*long_left | *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new UnsignedShort(*long_left | *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedShort(*long_left | *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new UnsignedShort(*long_left | *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new UnsignedShort(*long_left | *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new UnsignedShort(*long_left | *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new UnsignedShort(*long_left | *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new UnsignedShort(*long_left | *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<Byte>(left)) {
		Byte *long_left = (Byte* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Byte(*long_left | *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Byte(*long_left | *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Byte(*long_left | *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Byte(*long_left | *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Byte(*long_left | *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Byte(*long_left | *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Byte(*long_left | *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Byte(*long_left | *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Byte(*long_left | *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<UnsignedByte>(left)) {
		UnsignedByte *long_left = (UnsignedByte* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new UnsignedByte(*long_left | *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedByte(*long_left | *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new UnsignedByte(*long_left | *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedByte(*long_left | *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new UnsignedByte(*long_left | *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new UnsignedByte(*long_left | *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new UnsignedByte(*long_left | *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new UnsignedByte(*long_left | *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new UnsignedByte(*long_left | *bool_right);

		} else {
			return NULL;
		}
	} else {
		return NULL;
	}
}

ObjBase* const bxor(const ObjBase *const left,
		const ObjBase *const right) {
	if (instanceof<Integer>(left)) {
		Integer *int_left = (Integer* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Integer(*int_left ^ *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Integer(*int_left ^ *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Integer(*int_left ^ *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Integer(*int_left ^ *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Integer(*int_left ^ *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Integer(*int_left ^ *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Integer(*int_left ^ *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Integer(*int_left ^ *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Integer(*int_left ^ ((*bool_right) ? 1 : 0));

		} else {
			return NULL;
		}
	} else if (instanceof<UnsignedInteger>(left)) {
		UnsignedInteger *int_left = (UnsignedInteger* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new UnsignedInteger(*int_left ^ *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedInteger(*int_left ^ *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new UnsignedInteger(*int_left ^ *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedInteger(*int_left ^ *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new UnsignedInteger(*int_left ^ *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new UnsignedInteger(*int_left ^ *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new UnsignedInteger(*int_left ^ *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new UnsignedInteger(*int_left ^ *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new UnsignedInteger(*int_left ^ *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<Long>(left)) {
		Long *long_left = (Long* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Long(*long_left ^ *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Long(*long_left ^ *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Long(*long_left ^ *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Long(*long_left ^ *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Long(*long_left ^ *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Long(*long_left ^ *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Long(*long_left ^ *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Long(*long_left ^ *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Long(*long_left ^ *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<UnsignedLong>(left)) {
		UnsignedLong *long_left = (UnsignedLong* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new UnsignedLong(*long_left ^ *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedLong(*long_left ^ *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new UnsignedLong(*long_left ^ *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedLong(*long_left ^ *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new UnsignedLong(*long_left ^ *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new UnsignedLong(*long_left ^ *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new UnsignedLong(*long_left ^ *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new UnsignedLong(*long_left ^ *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new UnsignedLong(*long_left ^ *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<Short>(left)) {
		Short *long_left = (Short* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Short(*long_left ^ *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Short(*long_left ^ *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Short(*long_left ^ *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Short(*long_left ^ *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Short(*long_left ^ *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Short(*long_left ^ *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Short(*long_left ^ *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Short(*long_left ^ *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Short(*long_left ^ *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<UnsignedShort>(left)) {
		UnsignedShort *long_left = (UnsignedShort* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new UnsignedShort(*long_left ^ *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedShort(*long_left ^ *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new UnsignedShort(*long_left ^ *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedShort(*long_left ^ *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new UnsignedShort(*long_left ^ *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new UnsignedShort(*long_left ^ *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new UnsignedShort(*long_left ^ *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new UnsignedShort(*long_left ^ *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new UnsignedShort(*long_left ^ *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<Byte>(left)) {
		Byte *long_left = (Byte* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Byte(*long_left ^ *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Byte(*long_left ^ *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Byte(*long_left ^ *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Byte(*long_left ^ *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Byte(*long_left ^ *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Byte(*long_left ^ *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Byte(*long_left ^ *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Byte(*long_left ^ *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Byte(*long_left ^ *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<UnsignedByte>(left)) {
		UnsignedByte *long_left = (UnsignedByte* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new UnsignedByte(*long_left ^ *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedByte(*long_left ^ *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new UnsignedByte(*long_left ^ *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedByte(*long_left ^ *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new UnsignedByte(*long_left ^ *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new UnsignedByte(*long_left ^ *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new UnsignedByte(*long_left ^ *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new UnsignedByte(*long_left ^ *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new UnsignedByte(*long_left ^ *bool_right);

		} else {
			return NULL;
		}
	} else {
		return NULL;
	}
}

ObjBase* const land(const ObjBase *const left, const ObjBase *const right) {
	return new Boolean(left->bool_value() && right->bool_value());
}

ObjBase* const lor(const ObjBase *const left, const ObjBase *const right) {
	return new Boolean(left->bool_value() || right->bool_value());
}

ObjBase* const bxnor(const ObjBase *const left, const ObjBase *const right) {
	if (instanceof<Integer>(left)) {
		Integer *int_left = (Integer* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Integer(~(*int_left ^ *int_right));

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Integer(~(*int_left ^ *int_right));

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Integer(~(*int_left ^ *long_right));

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Integer(~(*int_left ^ *long_right));

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Integer(~(*int_left ^ *short_right));

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Integer(~(*int_left ^ *short_right));

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Integer(~(*int_left ^ *byte_right));

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Integer(~(*int_left ^ *byte_right));

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Integer(~(*int_left ^ ((*bool_right) ? 1 : 0)));

		} else {
			return NULL;
		}
	} else if (instanceof<UnsignedInteger>(left)) {
		UnsignedInteger *int_left = (UnsignedInteger* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new UnsignedInteger(~(*int_left ^ *int_right));

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedInteger(~(*int_left ^ *int_right));

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new UnsignedInteger(~(*int_left ^ *long_right));

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedInteger(~(*int_left ^ *long_right));

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new UnsignedInteger(~(*int_left ^ *short_right));

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new UnsignedInteger(~(*int_left ^ *short_right));

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new UnsignedInteger(~(*int_left ^ *byte_right));

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new UnsignedInteger(~(*int_left ^ *byte_right));

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new UnsignedInteger(~(*int_left ^ *bool_right));

		} else {
			return NULL;
		}
	} else if (instanceof<Long>(left)) {
		Long *long_left = (Long* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Long(~(*long_left ^ *int_right));

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Long(~(*long_left ^ *int_right));

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Long(~(*long_left ^ *long_right));

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Long(~(*long_left ^ *long_right));

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Long(~(*long_left ^ *short_right));

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Long(~(*long_left ^ *short_right));

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Long(~(*long_left ^ *byte_right));

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Long(~(*long_left ^ *byte_right));

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Long(~(*long_left ^ *bool_right));

		} else {
			return NULL;
		}
	} else if (instanceof<UnsignedLong>(left)) {
		UnsignedLong *long_left = (UnsignedLong* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new UnsignedLong(~(*long_left ^ *int_right));

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedLong(~(*long_left ^ *int_right));

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new UnsignedLong(~(*long_left ^ *long_right));

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedLong(~(*long_left ^ *long_right));

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new UnsignedLong(~(*long_left ^ *short_right));

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new UnsignedLong(~(*long_left ^ *short_right));

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new UnsignedLong(~(*long_left ^ *byte_right));

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new UnsignedLong(~(*long_left ^ *byte_right));

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new UnsignedLong(~(*long_left ^ *bool_right));

		} else {
			return NULL;
		}
	} else if (instanceof<Short>(left)) {
		Short *long_left = (Short* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Short(~(*long_left ^ *int_right));

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Short(~(*long_left ^ *int_right));

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Short(~(*long_left ^ *long_right));

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Short(~(*long_left ^ *long_right));

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Short(~(*long_left ^ *short_right));

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Short(~(*long_left ^ *short_right));

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Short(~(*long_left ^ *byte_right));

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Short(~(*long_left ^ *byte_right));

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Short(~(*long_left ^ *bool_right));

		} else {
			return NULL;
		}
	} else if (instanceof<UnsignedShort>(left)) {
		UnsignedShort *long_left = (UnsignedShort* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new UnsignedShort(~(*long_left ^ *int_right));

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedShort(~(*long_left ^ *int_right));

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new UnsignedShort(~(*long_left ^ *long_right));

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedShort(~(*long_left ^ *long_right));

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new UnsignedShort(~(*long_left ^ *short_right));

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new UnsignedShort(~(*long_left ^ *short_right));

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new UnsignedShort(~(*long_left ^ *byte_right));

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new UnsignedShort(~(*long_left ^ *byte_right));

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new UnsignedShort(~(*long_left ^ *bool_right));

		} else {
			return NULL;
		}
	} else if (instanceof<Byte>(left)) {
		Byte *long_left = (Byte* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Byte(~(*long_left ^ *int_right));

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Byte(~(*long_left ^ *int_right));

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Byte(~(*long_left ^ *long_right));

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Byte(~(*long_left ^ *long_right));

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Byte(~(*long_left ^ *short_right));

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Byte(~(*long_left ^ *short_right));

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Byte(~(*long_left ^ *byte_right));

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Byte(~(*long_left ^ *byte_right));

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Byte(~(*long_left ^ *bool_right));

		} else {
			return NULL;
		}
	} else if (instanceof<UnsignedByte>(left)) {
		UnsignedByte *long_left = (UnsignedByte* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new UnsignedByte(~(*long_left ^ *int_right));

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedByte(~(*long_left ^ *int_right));

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new UnsignedByte(~(*long_left ^ *long_right));

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedByte(~(*long_left ^ *long_right));

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new UnsignedByte(~(*long_left ^ *short_right));

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new UnsignedByte(~(*long_left ^ *short_right));

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new UnsignedByte(~(*long_left ^ *byte_right));

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new UnsignedByte(~(*long_left ^ *byte_right));

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new UnsignedByte(~(*long_left ^ *bool_right));

		} else {
			return NULL;
		}
	} else {
		return NULL;
	}
}

ObjBase* const lshift(const ObjBase *const left,
		const ObjBase *const right) {
	if (instanceof<Integer>(left)) {
		Integer *int_left = (Integer* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Integer(*int_left << *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Integer(*int_left << *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Integer(*int_left << *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Integer(*int_left << *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Integer(*int_left << *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Integer(*int_left << *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Integer(*int_left << *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Integer(*int_left << *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Integer(*int_left << ((*bool_right) ? 1 : 0));

		} else {
			return NULL;
		}
	} else if (instanceof<UnsignedInteger>(left)) {
		UnsignedInteger *int_left = (UnsignedInteger* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new UnsignedInteger(*int_left << *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedInteger(*int_left << *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new UnsignedInteger(*int_left << *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedInteger(*int_left << *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new UnsignedInteger(*int_left << *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new UnsignedInteger(*int_left << *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new UnsignedInteger(*int_left << *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new UnsignedInteger(*int_left << *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new UnsignedInteger(*int_left << *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<Long>(left)) {
		Long *long_left = (Long* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Long(*long_left << *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Long(*long_left << *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Long(*long_left << *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Long(*long_left << *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Long(*long_left << *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Long(*long_left << *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Long(*long_left << *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Long(*long_left << *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Long(*long_left << *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<UnsignedLong>(left)) {
		UnsignedLong *long_left = (UnsignedLong* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new UnsignedLong(*long_left << *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedLong(*long_left << *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new UnsignedLong(*long_left << *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedLong(*long_left << *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new UnsignedLong(*long_left << *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new UnsignedLong(*long_left << *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new UnsignedLong(*long_left << *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new UnsignedLong(*long_left << *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new UnsignedLong(*long_left << *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<Short>(left)) {
		Short *long_left = (Short* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Short(*long_left << *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Short(*long_left << *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Short(*long_left << *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Short(*long_left << *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Short(*long_left << *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Short(*long_left << *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Short(*long_left << *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Short(*long_left << *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Short(*long_left << *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<UnsignedShort>(left)) {
		UnsignedShort *long_left = (UnsignedShort* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new UnsignedShort(*long_left << *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedShort(*long_left << *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new UnsignedShort(*long_left << *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedShort(*long_left << *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new UnsignedShort(*long_left << *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new UnsignedShort(*long_left << *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new UnsignedShort(*long_left << *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new UnsignedShort(*long_left << *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new UnsignedShort(*long_left << *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<Byte>(left)) {
		Byte *long_left = (Byte* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Byte(*long_left << *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Byte(*long_left << *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Byte(*long_left << *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Byte(*long_left << *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Byte(*long_left << *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Byte(*long_left << *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Byte(*long_left << *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Byte(*long_left << *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Byte(*long_left << *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<UnsignedByte>(left)) {
		UnsignedByte *long_left = (UnsignedByte* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new UnsignedByte(*long_left << *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedByte(*long_left << *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new UnsignedByte(*long_left << *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedByte(*long_left << *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new UnsignedByte(*long_left << *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new UnsignedByte(*long_left << *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new UnsignedByte(*long_left << *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new UnsignedByte(*long_left << *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new UnsignedByte(*long_left << *bool_right);

		} else {
			return NULL;
		}
	} else {
		return NULL;
	}
}

ObjBase* const rshift(const ObjBase *const left,
		const ObjBase *const right) {
	if (instanceof<Integer>(left)) {
		Integer *int_left = (Integer* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Integer(*int_left >> *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Integer(*int_left >> *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Integer(*int_left >> *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Integer(*int_left >> *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Integer(*int_left >> *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Integer(*int_left >> *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Integer(*int_left >> *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Integer(*int_left >> *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Integer(*int_left >> ((*bool_right) ? 1 : 0));

		} else {
			return NULL;
		}
	} else if (instanceof<UnsignedInteger>(left)) {
		UnsignedInteger *int_left = (UnsignedInteger* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new UnsignedInteger(*int_left >> *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedInteger(*int_left >> *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new UnsignedInteger(*int_left >> *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedInteger(*int_left >> *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new UnsignedInteger(*int_left >> *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new UnsignedInteger(*int_left >> *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new UnsignedInteger(*int_left >> *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new UnsignedInteger(*int_left >> *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new UnsignedInteger(*int_left >> *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<Long>(left)) {
		Long *long_left = (Long* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Long(*long_left >> *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Long(*long_left >> *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Long(*long_left >> *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Long(*long_left >> *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Long(*long_left >> *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Long(*long_left >> *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Long(*long_left >> *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Long(*long_left >> *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Long(*long_left >> *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<UnsignedLong>(left)) {
		UnsignedLong *long_left = (UnsignedLong* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new UnsignedLong(*long_left >> *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedLong(*long_left >> *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new UnsignedLong(*long_left >> *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedLong(*long_left >> *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new UnsignedLong(*long_left >> *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new UnsignedLong(*long_left >> *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new UnsignedLong(*long_left >> *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new UnsignedLong(*long_left >> *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new UnsignedLong(*long_left >> *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<Short>(left)) {
		Short *long_left = (Short* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Short(*long_left >> *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Short(*long_left >> *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Short(*long_left >> *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Short(*long_left >> *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Short(*long_left >> *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Short(*long_left >> *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Short(*long_left >> *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Short(*long_left >> *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Short(*long_left >> *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<UnsignedShort>(left)) {
		UnsignedShort *long_left = (UnsignedShort* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new UnsignedShort(*long_left >> *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedShort(*long_left >> *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new UnsignedShort(*long_left >> *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedShort(*long_left >> *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new UnsignedShort(*long_left >> *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new UnsignedShort(*long_left >> *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new UnsignedShort(*long_left >> *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new UnsignedShort(*long_left >> *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new UnsignedShort(*long_left >> *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<Byte>(left)) {
		Byte *long_left = (Byte* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Byte(*long_left >> *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Byte(*long_left >> *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Byte(*long_left >> *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Byte(*long_left >> *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Byte(*long_left >> *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Byte(*long_left >> *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Byte(*long_left >> *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Byte(*long_left >> *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Byte(*long_left >> *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<UnsignedByte>(left)) {
		UnsignedByte *long_left = (UnsignedByte* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new UnsignedByte(*long_left >> *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedByte(*long_left >> *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new UnsignedByte(*long_left >> *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedByte(*long_left >> *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new UnsignedByte(*long_left >> *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new UnsignedByte(*long_left >> *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new UnsignedByte(*long_left >> *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new UnsignedByte(*long_left >> *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new UnsignedByte(*long_left >> *bool_right);

		} else {
			return NULL;
		}
	} else {
		return NULL;
	}
}

ObjBase* const lneg(const ObjBase* const value){
	return new Boolean(!value->bool_value());
}

ObjBase* const bneg(const ObjBase* const value){
	if(instanceof<Integer>(value)){
		Integer* val = (Integer* const)value;
		return new Integer(~*val);
	} else if(instanceof<UnsignedInteger>(value)){
		UnsignedInteger* const val = (UnsignedInteger* const)value;
		return new Integer(~*val);
	} else if(instanceof<Long>(value)){
		Long* const val = (Long* const)value;
		return new Long(~*val);
	} else if(instanceof<UnsignedLong>(value)){
		UnsignedLong* const val = (UnsignedLong* const)value;
		return new Long(~*val);
	} else if(instanceof<Short>(value)){
		Short* const val = (Short* const)value;
		return new Short(~*val);
	} else if(instanceof<UnsignedShort>(value)){
		UnsignedShort* const val = (UnsignedShort* const)value;
		return new Byte(~*val);
	} else if(instanceof<Byte>(value)){
		Byte* const val = (Byte* const)value;
		return new Byte(~*val);
	} else if(instanceof<UnsignedByte>(value)){
		UnsignedByte* const val = (UnsignedByte* const)value;
		return new UnsignedByte(~*val);
	} else {
		return NULL;
	}
}

ObjBase* const neg(const ObjBase* const value){
	if(instanceof<Real>(value)){
		Real* const val = (Real* const)value;
		return new Real(-*val);
	} else if(instanceof<Integer>(value)){
		Integer* val = (Integer* const)value;
		return new Integer(-*val);
	} else if(instanceof<UnsignedInteger>(value)){
		UnsignedInteger* const val = (UnsignedInteger* const)value;
		return new Integer(-*val);
	} else if(instanceof<Long>(value)){
		Long* const val = (Long* const)value;
		return new Long(-*val);
	} else if(instanceof<UnsignedLong>(value)){
		UnsignedLong* const val = (UnsignedLong* const)value;
		return new Long(-*val);
	} else if(instanceof<Short>(value)){
		Short* const val = (Short* const)value;
		return new Short(-*val);
	} else if(instanceof<UnsignedShort>(value)){
		UnsignedShort* const val = (UnsignedShort* const)value;
		return new Byte(-*val);
	} else if(instanceof<Byte>(value)){
		Byte* const val = (Byte* const)value;
		return new Byte(-*val);
	} else if(instanceof<UnsignedByte>(value)){
		UnsignedByte* const val = (UnsignedByte* const)value;
		return new UnsignedByte(-*val);
	} else {
		return NULL;
	}
}

