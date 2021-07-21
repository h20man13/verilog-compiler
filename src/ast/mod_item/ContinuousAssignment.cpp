#include "ast/mod_item/ContinuousAssignment.h"


ContinuousAssignment::ContinuousAssignment(const Position& position, std::list<ContAssignInstance* const> &cont_list): ModItem(position){
	for(std::list<ContAssignInstance* const>::const_iterator it = cont_list.begin(); it != cont_list.end(); it++){
		this->cont_list.push_back(*it);
	}
}

ContinuousAssignment::ContinuousAssignment(const ContinuousAssignment& assignment): ModItem(assignment.get_position()) {
	for(std::list<ContAssignInstance* const>::const_iterator it = assignment.cont_list.begin(); it != assignment.cont_list.end(); it++){
		this->cont_list.push_back(*it);
	}
}

void ContinuousAssignment::perform() const{

}

/**
 * The code gen method generates the LLVM ir for the statement
 */
void ContinuousAssignment::code_gen() const{

}



