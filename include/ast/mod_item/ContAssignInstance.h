/*
 * ContAssignInstance.h
 *
 *  Created on: Jul 21, 2021
 *      Author: jacob
 */

#ifndef CONTASSIGNINSTANCE_H
#define CONTASSIGNINSTANCE_H

#include "ast/expression/LValue.h"
#include "ast/expression/Expression.h"

class ContAssignInstance{
private:
	LValue* const lvalue;
	Expression* const expression;
public:
	ContAssignInstance(LValue* const lvalue, Expression* const expression);
	ContAssignInstance(const ContAssignInstance& instance);

	~ContAssignInstance();
	void assign() const;
};



#endif
