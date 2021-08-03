#include "ast/mod_item/declaration/net/reg/RegDeclaration.h"


RegDeclaration::RegDeclaration(std::list<RegValue* const> &reg_list){
	for(std::list<RegValue* const>::const_iterator it = reg_list.begin(); it != reg_list.end(); it++){
		this->reg_list.push_back(*it);
	}
}

RegDeclaration::RegDeclaration(const RegDeclaration& declaration){
	for(std::list<RegValue* const>::const_iterator it = declaration.reg_list.begin(); it != declaration.reg_list.end(); it++){
		this->reg_list.push_back(*it);
	}
}

RegDeclaration::~RegDeclaration(){
	while(!reg_list.empty()){
		RegValue* const reg = *(reg_list.begin());
		delete reg;
		reg_list.pop_front();
	}
}
