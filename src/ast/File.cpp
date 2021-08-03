#include "ast/File.h"


File::File(const Position& position, std::list<Module* const> module_list, SymbolTable* const table): table(table), AstNode(position){
	for(std::list<Module* const>::const_iterator it = module_list.begin(); it != module_list.end(); it++){
		this->module_list.push_back(*it);
	}
}

File::File(const File& module): AstNode(module), table(module.table){
	for(std::list<Module* const>::const_iterator it = module.module_list.begin(); it != module.module_list.end(); it++){
		this->module_list.push_back(*it);
	}
}

File::~File(){
	while(!module_list.empty()){
		Module* const mod = *module_list.begin();
		delete mod;
		module_list.pop_front();
	}
}

void File::interpret() const{

}

void File::code_gen() const{

}
