#include "ast/expression/PortConnection.h"

PortConnection::PortConnection(const Position& position, const std::string& assign, const std::string& value): Expression(position), assign(assign), value(value){}

PortConnection::PortConnection(const PortConnection& connection): Expression(connection.get_position()), assign(connection.assign), value(connection.value){};

void PortConnection::code_gen() const {
	//TODO - ADD llvm emit code here
}

ObjBase* const PortConnection::evaluate(){
	return NULL;
}

PortConnection::~PortConnection(){
	delete assign;
	delete value;
}
