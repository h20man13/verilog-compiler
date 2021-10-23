/*
 * TypeOpUtils.cpp
 *
 *  Created on: Jun 29, 2021
 *      Author: jacob
 */

#include "common/TypeOpUtils.h"


Object* const add(Object* const left, Object* const right) {
	if (instanceof<String>(left)) {

		return new String(right->to_string() + left->to_string());

	} else if (instanceof<Integer>(left)) {
		Integer* int_left = (Integer*)left;

		if (instanceof<Double>(right)) {

			Double* double_right = (Double*)right;
			return new Double(*int_left + *double_right);

		} else if (instanceof<Float>(right)) {

			Float* float_right = (Float*)right;
			return new Float(*int_left + *float_right);
			
		} else if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Integer(*int_left + *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedInteger(*int_left + *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Long(*int_left + *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedLong(*int_left + *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Integer(*int_left + *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new UnsignedInteger(*int_left + *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Integer(*int_left + *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new UnsignedInteger(*int_left + *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Integer(*int_left + ((*bool_right) ? 1 : 0));

		} else {
			return NULL;
		}
	} else if (instanceof<UnsignedInteger>(left)) {
		UnsignedInteger *int_left = (UnsignedInteger* const ) left;

		if (instanceof<Double>(right)) {

			Double* double_right = (Double*)right;
			return new Double(*int_left + *double_right);

		} if (instanceof<Float>(right)) {

			Float* double_right = (Float*)right;
			return new Float(*int_left + *double_right);

		} else if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new UnsignedInteger(*int_left + *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedInteger(*int_left + *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new UnsignedLong(*int_left + *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedLong(*int_left + *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const )right;
			return new UnsignedInteger(*int_left + *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const) right;
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

		if (instanceof<Double>(right)) {

			Double *real_right = (Double*)right;
			return new Double(*long_left + *real_right);

		} else if (instanceof<Float>(right)) {

			Float *real_right = (Float*)right;
			return new Float(*long_left + *real_right);

		} else if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Long(*long_left + *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedLong(*long_left + *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Long(*long_left + *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedLong(*long_left + *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Long(*long_left + *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new UnsignedLong(*long_left + *short_right);

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

		if (instanceof<Double>(right)) {

			Double *real_right = (Double*) right;
			return new Double(*long_left + *real_right);

		} if (instanceof<Float>(right)) {

			Float *real_right = (Float*) right;
			return new Float(*long_left + *real_right);

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

		if (instanceof<Double>(right)) {

			Double* real_right = (Double*)right;
			return new Double(*long_left + *real_right);

		} else if (instanceof<Float>(right)) {

			Float* real_right = (Float*)right;
			return new Float(*long_left + *real_right);

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

		if (instanceof<Double>(right)) {

			Double *real_right = (Double* const )right;
			return new Double(*long_left + *real_right);

		} else if (instanceof<Float>(right)){
			
		    Float *real_right = (Float* const )right;
			return new Float(*long_left + *real_right);

		} else if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new UnsignedInteger(*long_left + *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedInteger(*long_left + *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new UnsignedLong(*long_left + *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedLong(*long_left + *long_right);

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

		if (instanceof<Double>(right)) {

			Double *real_right = (Double*)right;
			return new Double(*long_left + *real_right);

		} else if (instanceof<Float>(right)) {

			Float *real_right = (Float*)right;
			return new Float(*long_left + *real_right);

		} else if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Integer(*long_left + *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedInteger(*long_left + *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Long(*long_left + *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedLong(*long_left + *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Short(*long_left + *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new UnsignedShort(*long_left + *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Byte(*long_left + *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new UnsignedByte(*long_left + *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Byte(*long_left + *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<UnsignedByte>(left)) {
		UnsignedByte *long_left = (UnsignedByte* const ) left;

		if (instanceof<Double>(right)) {

			Double *real_right = (Double* const) right;
			return new Double(*long_left + *real_right);

		} else if (instanceof<Float>(right)) {

			Float *float_right = (Float* const) right;
			return new Float(*long_left + *float_right);

		} else if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new UnsignedInteger(*long_left + *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedInteger(*long_left + *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new UnsignedLong(*long_left + *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedLong(*long_left + *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new UnsignedShort(*long_left + *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new UnsignedShort(*long_left + *short_right);

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
		Boolean *bool_left = (Boolean*)left;

		if (instanceof<Boolean>(right)) {

			Double *real_right = (Double* const) right;
			return new Double(*bool_left + *real_right);

		} else if (instanceof<Float>(right)) {

			Float *float_right = (Float* const) right;
			return new Float(*bool_left + *float_right);

		} else if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Integer(*bool_left + *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedInteger(*bool_left + *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Long(*bool_left + *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedLong(*bool_left + *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Short(*bool_left + *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new UnsignedShort(*bool_left + *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Byte(*bool_left + *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new UnsignedByte(*bool_left + *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Integer(*bool_left + *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<Float>(left)) {
		Float *long_left = (Float* const ) left;

		if (instanceof<Double>(right)) {

			Double *real_right = (Double* const) right;
			return new Double(*long_left + *real_right);

		} else if (instanceof<Float>(right)) {

			Float *float_right = (Float* const) right;
			return new Float(*long_left + *float_right);

		} else if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Float(*long_left + *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Float(*long_left + *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Float(*long_left + *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Float(*long_left + *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Float(*long_left + *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Float(*long_left + *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Float(*long_left + *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Float(*long_left + *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Float(*long_left + *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<Double>(left)) {
		Double *long_left = (Double* const ) left;

		if (instanceof<Double>(right)) {

			Double *real_right = (Double* const) right;
			return new Double(*long_left + *real_right);

		} else if (instanceof<Float>(right)) {

			Float *float_right = (Float* const) right;
			return new Double(*long_left + *float_right);

		} else if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Double(*long_left + *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Double(*long_left + *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Double(*long_left + *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Double(*long_left + *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Double(*long_left + *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Double(*long_left + *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Double(*long_left + *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Double(*long_left + *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Double(*long_left + *bool_right);

		} else {
			return NULL;
		}
	} else {
		return NULL;
	}
}

Object* const sub(Object* const left, Object* const right) {
	if (instanceof<Integer>(left)) {
		Integer* int_left = (Integer*)left;

		if (instanceof<Double>(right)) {

			Double* double_right = (Double*)right;
			return new Double(*int_left - *double_right);

		} else if (instanceof<Float>(right)) {

			Float* float_right = (Float*)right;
			return new Float(*int_left - *float_right);
			
		} else if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Integer(*int_left - *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedInteger(*int_left - *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Long(*int_left - *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedLong(*int_left - *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Integer(*int_left - *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new UnsignedInteger(*int_left - *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Integer(*int_left - *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new UnsignedInteger(*int_left - *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Integer(*int_left - ((*bool_right) ? 1 : 0));

		} else {
			return NULL;
		}
	} else if (instanceof<UnsignedInteger>(left)) {
		UnsignedInteger *int_left = (UnsignedInteger* const ) left;

		if (instanceof<Double>(right)) {

			Double* double_right = (Double*)right;
			return new Double(*int_left - *double_right);

		} if (instanceof<Float>(right)) {

			Float* double_right = (Float*)right;
			return new Float(*int_left - *double_right);

		} else if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new UnsignedInteger(*int_left - *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedInteger(*int_left - *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new UnsignedLong(*int_left - *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedLong(*int_left - *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const )right;
			return new UnsignedInteger(*int_left - *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const) right;
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

		if (instanceof<Double>(right)) {

			Double *real_right = (Double*)right;
			return new Double(*long_left - *real_right);

		} else if (instanceof<Float>(right)) {

			Float *real_right = (Float*)right;
			return new Float(*long_left - *real_right);

		} else if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Long(*long_left - *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedLong(*long_left - *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Long(*long_left - *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedLong(*long_left - *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Long(*long_left - *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new UnsignedLong(*long_left - *short_right);

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

		if (instanceof<Double>(right)) {

			Double *real_right = (Double*) right;
			return new Double(*long_left - *real_right);

		} if (instanceof<Float>(right)) {

			Float *real_right = (Float*) right;
			return new Float(*long_left - *real_right);

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

		if (instanceof<Double>(right)) {

			Double* real_right = (Double*)right;
			return new Double(*long_left - *real_right);

		} else if (instanceof<Float>(right)) {

			Float* real_right = (Float*)right;
			return new Float(*long_left - *real_right);

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

		if (instanceof<Double>(right)) {

			Double *real_right = (Double* const )right;
			return new Double(*long_left - *real_right);

		} else if (instanceof<Float>(right)){
			
		    Float *real_right = (Float* const )right;
			return new Float(*long_left - *real_right);

		} else if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new UnsignedInteger(*long_left - *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedInteger(*long_left - *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new UnsignedLong(*long_left - *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedLong(*long_left - *long_right);

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

		if (instanceof<Double>(right)) {

			Double *real_right = (Double*)right;
			return new Double(*long_left - *real_right);

		} else if (instanceof<Float>(right)) {

			Float *real_right = (Float*)right;
			return new Float(*long_left - *real_right);

		} else if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Integer(*long_left - *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedInteger(*long_left - *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Long(*long_left - *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedLong(*long_left - *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Short(*long_left - *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new UnsignedShort(*long_left - *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Byte(*long_left - *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new UnsignedByte(*long_left - *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Byte(*long_left - *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<UnsignedByte>(left)) {
		UnsignedByte *long_left = (UnsignedByte* const ) left;

		if (instanceof<Double>(right)) {

			Double *real_right = (Double* const) right;
			return new Double(*long_left - *real_right);

		} else if (instanceof<Float>(right)) {

			Float *float_right = (Float* const) right;
			return new Float(*long_left - *float_right);

		} else if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new UnsignedInteger(*long_left - *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedInteger(*long_left - *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new UnsignedLong(*long_left - *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedLong(*long_left - *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new UnsignedShort(*long_left - *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new UnsignedShort(*long_left - *short_right);

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
	} else if (instanceof<Boolean>(left)) {
		Boolean *bool_left = (Boolean*)left;

		if (instanceof<Boolean>(right)) {

			Double *real_right = (Double* const) right;
			return new Double(*bool_left - *real_right);

		} else if (instanceof<Float>(right)) {

			Float *float_right = (Float* const) right;
			return new Float(*bool_left - *float_right);

		} else if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Integer(*bool_left - *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedInteger(*bool_left - *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Long(*bool_left - *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedLong(*bool_left - *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Short(*bool_left - *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new UnsignedShort(*bool_left - *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Byte(*bool_left - *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new UnsignedByte(*bool_left - *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Integer(*bool_left - *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<Float>(left)) {
		Float *long_left = (Float* const ) left;

		if (instanceof<Double>(right)) {

			Double *real_right = (Double* const) right;
			return new Double(*long_left - *real_right);

		} else if (instanceof<Float>(right)) {

			Float *float_right = (Float* const) right;
			return new Float(*long_left - *float_right);

		} else if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Float(*long_left - *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Float(*long_left - *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Float(*long_left - *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Float(*long_left - *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Float(*long_left - *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Float(*long_left - *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Float(*long_left - *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Float(*long_left - *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Float(*long_left - *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<Double>(left)) {
		Double *long_left = (Double* const ) left;

		if (instanceof<Double>(right)) {

			Double *real_right = (Double* const) right;
			return new Double(*long_left - *real_right);

		} else if (instanceof<Float>(right)) {

			Float *float_right = (Float* const) right;
			return new Double(*long_left - *float_right);

		} else if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Double(*long_left - *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Double(*long_left - *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Double(*long_left - *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Double(*long_left - *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Double(*long_left - *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Double(*long_left - *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Double(*long_left - *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Double(*long_left - *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Double(*long_left - *bool_right);

		} else {
			return NULL;
		}
	} else {
		return NULL;
	}
}

Object* const mult(Object* const left, Object* const right) {
	if (instanceof<Integer>(left)) {
		Integer* int_left = (Integer*)left;

		if (instanceof<Double>(right)) {

			Double* double_right = (Double*)right;
			return new Double(*int_left * *double_right);

		} else if (instanceof<Float>(right)) {

			Float* float_right = (Float*)right;
			return new Float(*int_left * *float_right);
			
		} else if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Integer(*int_left * *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedInteger(*int_left * *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Long(*int_left * *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedLong(*int_left * *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Integer(*int_left * *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new UnsignedInteger(*int_left * *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Integer(*int_left * *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new UnsignedInteger(*int_left * *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Integer(*int_left * ((*bool_right) ? 1 : 0));

		} else {
			return NULL;
		}
	} else if (instanceof<UnsignedInteger>(left)) {
		UnsignedInteger *int_left = (UnsignedInteger* const ) left;

		if (instanceof<Double>(right)) {

			Double* double_right = (Double*)right;
			return new Double(*int_left * *double_right);

		} if (instanceof<Float>(right)) {

			Float* double_right = (Float*)right;
			return new Float(*int_left * *double_right);

		} else if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new UnsignedInteger(*int_left * *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedInteger(*int_left * *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new UnsignedLong(*int_left * *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedLong(*int_left * *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const )right;
			return new UnsignedInteger(*int_left * *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const) right;
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

		if (instanceof<Double>(right)) {

			Double *real_right = (Double*)right;
			return new Double(*long_left * *real_right);

		} else if (instanceof<Float>(right)) {

			Float *real_right = (Float*)right;
			return new Float(*long_left * *real_right);

		} else if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Long(*long_left * *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedLong(*long_left * *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Long(*long_left * *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedLong(*long_left * *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Long(*long_left * *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new UnsignedLong(*long_left * *short_right);

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

		if (instanceof<Double>(right)) {

			Double *real_right = (Double*) right;
			return new Double(*long_left * *real_right);

		} if (instanceof<Float>(right)) {

			Float *real_right = (Float*) right;
			return new Float(*long_left * *real_right);

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

		if (instanceof<Double>(right)) {

			Double* real_right = (Double*)right;
			return new Double(*long_left * *real_right);

		} else if (instanceof<Float>(right)) {

			Float* real_right = (Float*)right;
			return new Float(*long_left * *real_right);

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

		if (instanceof<Double>(right)) {

			Double *real_right = (Double* const )right;
			return new Double(*long_left * *real_right);

		} else if (instanceof<Float>(right)){
			
		    Float *real_right = (Float* const )right;
			return new Float(*long_left * *real_right);

		} else if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new UnsignedInteger(*long_left * *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedInteger(*long_left * *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new UnsignedLong(*long_left * *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedLong(*long_left * *long_right);

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

		if (instanceof<Double>(right)) {

			Double *real_right = (Double*)right;
			return new Double(*long_left * *real_right);

		} else if (instanceof<Float>(right)) {

			Float *real_right = (Float*)right;
			return new Float(*long_left * *real_right);

		} else if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Integer(*long_left * *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedInteger(*long_left * *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Long(*long_left * *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedLong(*long_left * *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Short(*long_left * *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new UnsignedShort(*long_left * *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Byte(*long_left * *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new UnsignedByte(*long_left * *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Byte(*long_left * *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<UnsignedByte>(left)) {
		UnsignedByte *long_left = (UnsignedByte* const ) left;

		if (instanceof<Double>(right)) {

			Double *real_right = (Double* const) right;
			return new Double(*long_left * *real_right);

		} else if (instanceof<Float>(right)) {

			Float *float_right = (Float* const) right;
			return new Float(*long_left * *float_right);

		} else if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new UnsignedInteger(*long_left * *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedInteger(*long_left * *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new UnsignedLong(*long_left * *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedLong(*long_left * *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new UnsignedShort(*long_left * *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new UnsignedShort(*long_left * *short_right);

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
	} else if (instanceof<Boolean>(left)) {
		Boolean *bool_left = (Boolean*)left;

		if (instanceof<Boolean>(right)) {

			Double *real_right = (Double* const) right;
			return new Double(*bool_left * *real_right);

		} else if (instanceof<Float>(right)) {

			Float *float_right = (Float* const) right;
			return new Float(*bool_left * *float_right);

		} else if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Integer(*bool_left * *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new UnsignedInteger(*bool_left * *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Long(*bool_left * *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new UnsignedLong(*bool_left * *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Short(*bool_left * *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new UnsignedShort(*bool_left * *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Byte(*bool_left * *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new UnsignedByte(*bool_left * *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Integer(*bool_left * *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<Float>(left)) {
		Float *long_left = (Float* const ) left;

		if (instanceof<Double>(right)) {

			Double *real_right = (Double* const) right;
			return new Double(*long_left * *real_right);

		} else if (instanceof<Float>(right)) {

			Float *float_right = (Float* const) right;
			return new Float(*long_left * *float_right);

		} else if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Float(*long_left * *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Float(*long_left * *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Float(*long_left * *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Float(*long_left * *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Float(*long_left * *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Float(*long_left * *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Float(*long_left * *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Float(*long_left * *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Float(*long_left * *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<Double>(left)) {
		Double *long_left = (Double* const ) left;

		if (instanceof<Double>(right)) {

			Double *real_right = (Double* const) right;
			return new Double(*long_left * *real_right);

		} else if (instanceof<Float>(right)) {

			Float *float_right = (Float* const) right;
			return new Double(*long_left * *float_right);

		} else if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Double(*long_left * *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Double(*long_left * *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Double(*long_left * *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Double(*long_left * *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Double(*long_left * *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Double(*long_left * *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Double(*long_left * *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Double(*long_left * *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Double(*long_left * *bool_right);

		} else {
			return NULL;
		}
	} else {
		return NULL;
	}
}

Object* const div(const Object *const left, const Object *const right) {
	if (instanceof<Integer>(left)) {
		Integer *int_left = (Integer* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Double(*int_left / *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Double(*int_left / *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Double(*int_left / *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Double(*int_left / *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Double(*int_left / *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Double(*int_left / *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Double(*int_left / *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Double(*int_left / *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Double(*int_left / ((*bool_right) ? 1 : 0));

		} else {
			return NULL;
		}
	} else if (instanceof<UnsignedInteger>(left)) {
		UnsignedInteger *int_left = (UnsignedInteger* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Double(*int_left / *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Double(*int_left / *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Double(*int_left / *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Double(*int_left / *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Double(*int_left / *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Double(*int_left / *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Double(*int_left / *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Double(*int_left / *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Double(*int_left / *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<Long>(left)) {
		Long *long_left = (Long* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Double(*long_left / *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Double(*long_left / *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Double(*long_left / *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Double(*long_left / *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Double(*long_left / *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Double(*long_left / *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Double(*long_left / *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Double(*long_left / *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Double(*long_left / *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<UnsignedLong>(left)) {
		UnsignedLong *long_left = (UnsignedLong* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Double(*long_left / *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Double(*long_left / *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Double(*long_left / *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Double(*long_left / *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Double(*long_left / *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Double(*long_left / *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Double(*long_left / *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Double(*long_left / *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Double(*long_left / *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<Short>(left)) {
		Short *long_left = (Short* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Double(*long_left / *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Double(*long_left / *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Double(*long_left / *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Double(*long_left / *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Double(*long_left / *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Double(*long_left / *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Double(*long_left / *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Double(*long_left / *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Double(*long_left / *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<UnsignedShort>(left)) {
		UnsignedShort *long_left = (UnsignedShort* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Double(*long_left / *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Double(*long_left / *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Double(*long_left / *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Double(*long_left / *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Double(*long_left / *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Double(*long_left / *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Double(*long_left / *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Double(*long_left / *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Double(*long_left / *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<Byte>(left)) {
		Byte *long_left = (Byte* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Double(*long_left / *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Double(*long_left / *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Double(*long_left / *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Double(*long_left / *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Double(*long_left / *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Double(*long_left / *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Double(*long_left / *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Double(*long_left / *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Double(*long_left / *bool_right);

		} else {
			return NULL;
		}
	} else if (instanceof<UnsignedByte>(left)) {
		UnsignedByte *long_left = (UnsignedByte* const ) left;

		if (instanceof<Integer>(right)) {

			Integer *int_right = (Integer* const ) right;
			return new Double(*long_left / *int_right);

		} else if (instanceof<UnsignedInteger>(right)) {

			UnsignedInteger *int_right = (UnsignedInteger* const ) right;
			return new Double(*long_left / *int_right);

		} else if (instanceof<Long>(right)) {

			Long *long_right = (Long* const ) right;
			return new Double(*long_left / *long_right);

		} else if (instanceof<UnsignedLong>(right)) {

			UnsignedLong *long_right = (UnsignedLong* const ) right;
			return new Double(*long_left / *long_right);

		} else if (instanceof<Short>(right)) {

			Short *short_right = (Short* const ) right;
			return new Double(*long_left / *short_right);

		} else if (instanceof<UnsignedShort>(right)) {

			UnsignedShort *short_right = (UnsignedShort* const ) right;
			return new Double(*long_left / *short_right);

		} else if (instanceof<Byte>(right)) {

			Byte *byte_right = (Byte* const ) right;
			return new Double(*long_left / *byte_right);

		} else if (instanceof<UnsignedByte>(right)) {

			UnsignedByte *byte_right = (UnsignedByte* const ) right;
			return new Double(*long_left / *byte_right);

		} else if (instanceof<Boolean>(right)) {

			Boolean *bool_right = (Boolean* const ) right;
			return new Double(*long_left / *bool_right);

		} else {
			return NULL;
		}
	} else {
		return NULL;
	}
}

Object* const mod(const Object *const left,
		const Object *const right) {
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

Object* const band(const Object *const left,
		const Object *const right) {
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

Object* const bor(const Object *const left,
		const Object *const right) {
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

Object* const bxor(const Object *const left,
		const Object *const right) {
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

Object* const land(const Object *const left, const Object *const right) {
	return new Boolean(left->bool_value() && right->bool_value());
}

Object* const lor(const Object *const left, const Object *const right) {
	return new Boolean(left->bool_value() || right->bool_value());
}

Object* const bxnor(const Object *const left, const Object *const right) {
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

Object* const lshift(const Object *const left,
		const Object *const right) {
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

Object* const rshift(const Object *const left,
		const Object *const right) {
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

Object* const lneg(const Object* const value){
	return new Boolean(!value->bool_value());
}

Object* const bneg(const Object* const value){
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

Object* const neg(const Object* const value){
	if(instanceof<Double>(value)){
		Double* const val = (Double* const)value;
		return new Double(-*val);
	} else if(instanceof<Float>(value)){
		Float* const val = (Float* const)value;
		return new Float(-*val);
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

