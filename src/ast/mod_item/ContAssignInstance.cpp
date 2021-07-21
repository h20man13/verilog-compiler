#include "ast/mod_item/ContAssignInstance.h"

ContAssignInstance::ContAssignInstance(LValue* const lvalue, Expression* const expression): lvalue(lvalue), expression(expression){}
ContAssignInstance::ContAssignInstance(const ContAssignInstance& instance): lvalue(instance.lvalue), expression(instance.expression){}

ContAssignInstance::~ContAssignInstance(){
	delete lvalue;
	delete expression;
}

void ContAssignInstance::assign() const{

}
