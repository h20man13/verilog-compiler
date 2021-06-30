/*
 * TypeOpUtils.h
 *
 *  Created on: Jun 29, 2021
 *      Author: jacob
 */

#ifndef TYPEOPUTILS_H
#define TYPEOPUTILS_H

#include "common/types/ObjBase.h"

/**
 * The + operator is used to add any base objects together
 * @param left the left side of the binary +
 * @param right the right side of the binary +
 * @return a pointer to a base object
 */

ObjBase* const add(const ObjBase* const left, const ObjBase* const right);

/**
 * subtracts both of the binary - objects
 * @param left
 * @param right
 * @return a pointer to an objbase instance
 */
ObjBase* const sub(const ObjBase* const left, const ObjBase* const right);

/**
 * subtracts both of the binary * objects
 * @param left
 * @param right
 * @return a pointer to an objbase instance
 */
ObjBase* const mult(const ObjBase* const left, const ObjBase* const right);

/**
 * subtracts both of the binary / objects
 * @param left
 * @param right
 * @return a pointer to an objbase instance
 */
ObjBase* const div(const ObjBase* const left, const ObjBase* const right);

/**
 * subtracts both of the binary % objects
 * @param left
 * @param right
 * @return a pointer to an objbase instance
 */
ObjBase* const mod(const ObjBase* const left, const ObjBase* const right);

/**
 * subtracts both of the binary & objects
 * @param left
 * @param right
 * @return a pointer to an objbase instance
 */
ObjBase* const band(const ObjBase* const left, const ObjBase* const right);

/**
 * subtracts both of the binary | objects
 * @param left
 * @param right
 * @return a pointer to an objbase instance
 */
ObjBase* const bor(const ObjBase* const left, const ObjBase* const right);

/**
 * xors both of the binary or objects
 * @param left
 * @param right
 * @return  left * right
 */

ObjBase* const bxor(const ObjBase* const left, const ObjBase* const right);
/**
 * subtracts both of the binary && objects
 * @param left
 * @param right
 * @return a pointer to an objbase instance
 */
ObjBase* const land(const ObjBase* const left, const ObjBase* const right);

/**
 * subtracts both of the binary || objects
 * @param left
 * @param right
 * @return a pointer to an objbase instance
 */
ObjBase* const lor(const ObjBase* const left, const ObjBase* const right);

/**
 * does both of the binary ^~ or ~^ expressions
 * @param left
 * @param right
 * @return a pointer to an objbase instance
 */
ObjBase* const bxnor(const ObjBase* const left, const ObjBase* const right);

/**
 * shifts the left expression both of the binary << objects
 * @param left expression to be shifted
 * @param right  expression that evaluates to the amount that will be shifted over
 * @return a pointer to an objbase instance
 */
ObjBase* const lshift(const ObjBase* const left, const ObjBase* const right);

/**
 * shifts the left expression both of the binary >> objects
 * @param left expression to be shifted
 * @param right  expression that evaluates to the amount that will be shifted over
 * @return a pointer to an objbase instance
 */
ObjBase* const rshift(const ObjBase* const left, const ObjBase* const right);

ObjBase* const bneg(const ObjBase* const value);

ObjBase* const lneg(const ObjBase* const value);

ObjBase* const neg(const ObjBase* const value);

#endif /* INCLUDE_COMMON_TYPES_TYPEOPUTILS_H_ */
