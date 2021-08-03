/*
 * SymbolTable.h
 *
 *  Created on: Jul 31, 2021
 *      Author: jacob
 */

#ifndef SYMBOLTABLE_H
#define SYMBOLTABLE_H

#include <list>
#include <string>

#include "ast/AstNode.h"
#include "common/ErrorLog.h"

//settings to specify the type of variable

class SymbolTable{
public:
	enum attribute{
				EMPTY = 0,
				PARAMATER = 0b00000000000001,
				FUNCTION = 0b00000000000010,
				GLOBAL = 0b00000000000100,
				LOCAL = 0b00000000001000,
				INPUT = 0b00000000010000,
				OUTPUT = 0b00000000100000,
				REG = 0b00000001000000,
				WIRE = 0b00000010000000,
				REAL = 0b00000100000000,
				INTEGER = 0b00001000000000,
				ARRAY = 0b00010000000000,
				VECTOR = 0b00100000000000,
				PORT = 0b01000000000000,
				MACRO = 0b10000000000000,
				UNIDENTIFIED = 0b100000000000000,
				ANY = 0b11111111111111
	};

	struct Entry{
			const std::string identifier;
			unsigned int data;
			const Position position;
			AstNode* const address;
	};

	SymbolTable(ErrorLog& error_log, SymbolTable const* const parent = NULL);

	Entry const* const lookup(const std::string& key, const unsigned int data_type=ANY, const bool in_scope = false) const;
	void insert(const std::string& key, const unsigned int data_mask, const Position& position, AstNode* const address = NULL);
	void set_attribute(const std::string& key, const unsigned int data);
	bool get_attribute(const std::string& key, const unsigned int data);

private:

	ErrorLog error_log;

	std::list<const Entry> entries;

	SymbolTable const* const parent;
};



#endif /* INCLUDE_SYMBOLTABLE_H_ */
