/*
 * TypeOpUtils.h
 *
 *  Created on: Jun 29, 2021
 *      Author: jacob
 */

#ifndef TYPEOPUTILS_H
#define TYPEOPUTILS_H

#include "OO-Types/include/String.h"
#include "OO-Types/include/Double.h"
#include "OO-Types/include/Float.h"
#include "OO-Types/include/Integer.h"
#include "OO-Types/include/UnsignedInteger.h"
#include "OO-Types/include/Long.h"
#include "OO-Types/include/UnsignedLong.h"
#include "OO-Types/include/Short.h"
#include "OO-Types/include/UnsignedShort.h"
#include "OO-Types/include/Byte.h"
#include "OO-Types/include/UnsignedByte.h"
#include "OO-Types/include/Boolean.h"

/**
 * The + operator is used to add any base objects together
 * @param left the left side of the binary +
 * @param right the right side of the binary +
 * @return a pointer to a base object
 */

Object* const add(const Object* const left, const Object* const right);

/**
 * subtracts both of the binary - objects
 * @param left
 * @param right
 * @return a pointer to an Object instance
 */
Object* const sub(const Object* const left, const Object* const right);

/**
 * subtracts both of the binary * objects
 * @param left
 * @param right
 * @return a pointer to an Object instance
 */
Object* const mult(const Object* const left, const Object* const right);

/**
 * subtracts both of the binary / objects
 * @param left
 * @param right
 * @return a pointer to an Object instance
 */
Object* const div(const Object* const left, const Object* const right);

/**
 * subtracts both of the binary % objects
 * @param left
 * @param right
 * @return a pointer to an Object instance
 */
Object* const mod(const Object* const left, const Object* const right);

/**
 * subtracts both of the binary & objects
 * @param left
 * @param right
 * @return a pointer to an Object instance
 */
Object* const band(const Object* const left, const Object* const right);

/**
 * subtracts both of the binary | objects
 * @param left
 * @param right
 * @return a pointer to an Object instance
 */
Object* const bor(const Object* const left, const Object* const right);

/**
 * xors both of the binary or objects
 * @param left
 * @param right
 * @return  left * right
 */

Object* const bxor(const Object* const left, const Object* const right);
/**
 * subtracts both of the binary && objects
 * @param left
 * @param right
 * @return a pointer to an Object instance
 */
Object* const land(const Object* const left, const Object* const right);

/**
 * subtracts both of the binary || objects
 * @param left
 * @param right
 * @return a pointer to an Object instance
 */
Object* const lor(const Object* const left, const Object* const right);

/**
 * does both of the binary ^~ or ~^ expressions
 * @param left
 * @param right
 * @return a pointer to an Object instance
 */
Object* const bxnor(const Object* const left, const Object* const right);

/**
 * shifts the left expression both of the binary << objects
 * @param left expression to be shifted
 * @param right  expression that evaluates to the amount that will be shifted over
 * @return a pointer to an Object instance
 */
Object* const lshift(const Object* const left, const Object* const right);

/**
 * shifts the left expression both of the binary >> objects
 * @param left expression to be shifted
 * @param right  expression that evaluates to the amount that will be shifted over
 * @return a pointer to an Object instance
 */
Object* const rshift(const Object* const left, const Object* const right);

Object* const bneg(const Object* const value);

Object* const lneg(const Object* const value);

Object* const neg(const Object* const value);

#endif /* INCLUDE_COMMON_TYPES_TYPEOPUTILS_H_ */
