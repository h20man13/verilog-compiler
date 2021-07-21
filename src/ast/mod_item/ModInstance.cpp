#include "ast/mod_item/ModInstance.h"

ModInstance::ModInstance(Identifier* const ident, std::list<Expression* const> &exp_list): ident(ident){
	for(std::list<Expression* const>::const_iterator it = exp_list.begin(); it != exp_list.end(); it++){
		this->exp_list.push_back(*it);
	}
}

ModInstance::ModInstance(const ModInstance& instance): ident(instance.ident){
	for(std::list<Expression* const>::const_iterator it = instance.exp_list.begin(); it != instance.exp_list.end(); it++){
		this->exp_list.push_back(*it);
	}
}

ModInstance::~ModInstance(){
	delete ident;
	while(!exp_list.empty()){
		Expression* const exp = *exp_list.begin();
		delete exp;
		exp_list.pop_front();
	}
}


