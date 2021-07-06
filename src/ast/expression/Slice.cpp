#include "ast/expression/Slice.h"
#include <list>



	Slice::Slice(const Position& position, const std::string& lexeme, Expression* const begin, Expression* const end): Expression(position), lexeme(lexeme), begin(begin), end(end){}

	Slice::Slice(const Slice& slice): Expression(slice.get_position()), lexeme(slice.lexeme), begin(slice.begin), end(slice.end){}

	void Slice::code_gen() const {
		//TODO -- generate llvm IR
	}

	ObjBase* const Slice::evaluate(){
		//TODO -- evaluate the expression
		return NULL;
	}

	Slice::~Slice(){
		delete begin;
		delete end;
	}


