#include "ast/statement/assignment/ProceduralAssignment.h"


ProceduralAssignment::ProceduralAssignment(const Position &position, LValue *const left, Expression *const right) : Statement(position), left(left), right(right) {}

ProceduralAssignment::ProceduralAssignment(const ProceduralAssignment& assignment): Statement(assignment.get_position()), left(assignment.left), right(assignment.right){}

ProceduralAssignment::~ProceduralAssignment() {
	delete left;
	delete right;
}



