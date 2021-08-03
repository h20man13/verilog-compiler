#include "ast/expression/PortConnection.h"

PortConnection::PortConnection(const Position& position, const std::string& assign, const std::string& value, SymbolTable* const table): AstNode(position), table(table),assign(assign), value(value){}

PortConnection::PortConnection(const PortConnection& connection): AstNode(connection.get_position()), assign(connection.assign), table(connection.table),value(connection.value){};

void PortConnection::code_gen() const {
	//TODO - ADD llvm emit code here
}

ObjBase* const PortConnection::evaluate(){
	return NULL;
}

PortConnection::~PortConnection(){
}
