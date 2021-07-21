/*
 * Assignment.h
 *
 *  Created on: Jul 15, 2021
 *      Author: jacob
 */

#ifndef CONTINUOUSASSIGNMENT_H
#define CONTINUOUSASSIGNMENT_H

#include "ast/mod_item/ModItem.h"
#include "ast/expression/LValue.h"
#include "ast/expression/Expression.h"
#include "ast/mod_item/ContAssignInstance.h"
#include <list>

/**
 * The assignment template is used to create assignments in verilog. In verilog their are 3 types of assignments, Blocking, NonBlocking, and continuous assignments
 * @author Jacob Bauer
 */
class ContinuousAssignment: ModItem{
protected:
	ContinuousAssignment(const Position& position, std::list<ContAssignInstance* const> &cont_list);
	ContinuousAssignment(const ContinuousAssignment& assignment);
private:
	std::list<ContAssignInstance* const> cont_list;
public:
	/**
	 *
	 * The execute method is used to interpret statements
	 * @return None
	 */

	void perform() const;

	/**
	 * The code gen method generates the LLVM ir for the statement
	 */
	void code_gen() const;
};



#endif
