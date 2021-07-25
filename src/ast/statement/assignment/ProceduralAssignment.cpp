#include "ast/statement/assignment/ProceduralAssignment.h"


ProceduralAssignment::ProceduralAssignment(const Position &position) : Statement(position){}

ProceduralAssignment::ProceduralAssignment(const ProceduralAssignment& assignment): Statement(assignment.get_position()){}



