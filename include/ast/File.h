/*
 * File.h
 *
 *  Created on: Jul 21, 2021
 *      Author: jacob
 */

#ifndef FILE_H
#define FILE_H

#include "ast/AstNode.h"
#include "ast/Module.h"

class File: AstNode{
private:
	std::list<Module* const> module_list;
public:
	File(const Position& position, std::list<Module* const> module_list);
	File(const File& module);

	~File();

	void interpret() const;
	void code_gen() const;
};





#endif /* INCLUDE_AST_FILE_H_ */
