/*
 * RegValue.h
 *
 *  Created on: Jul 19, 2021
 *      Author: jacob
 */

#ifndef REGVALUE_H
#define REGVALUE_H

class RegValue: public virtual AstNode{
public:
	virtual void declare() const = 0;
	virtual SymbolTable::attribute get_attribute_type() const = 0;
	virtual const std::string get_symbol_name() const = 0;
	virtual ~RegValue() = 0;
};



#endif /* INCLUDE_AST_MOD_ITEM_DECLARATION_REG_REGVALUE_H_ */
