#include "SymbolTable.h"


SymbolTable::SymbolTable(ErrorLog& error_log, SymbolTable const* const parent): error_log(error_log), parent(parent){}

SymbolTable::Entry const* const SymbolTable::lookup(const std::string& key, const unsigned int data_type, const bool in_scope) const {
	for(std::list<const Entry>::reverse_iterator it = entries.rbegin(); it != entries.rend(); it++){
		if(it->identifier == key && (it->data & data_type) == data_type){
			return &(*it);
		}
	}

	if(in_scope){
		return NULL;
	} else {
		return (parent == NULL) ? NULL : parent->lookup(key);
	}
}

void SymbolTable::insert(const std::string& key, const unsigned int data_mask, const Position& position, AstNode* const address){
	Entry* entry = lookup(key, data_mask, true);
	if(((data_mask & SymbolTable::WIRE) || (data_mask & SymbolTable::REG)) && (entry->data & SymbolTable::UNIDENTIFIED)){ //edit if it exists and it is undefined
		set_attribute(key, data_mask); //update the unidentified variable to whatever this is
	} if(entry == NULL){ //nothing exists so add it
		entries.push_back({key, data_mask, position, address});
	} else if(((entry->data & FUNCTION) && (!(data_mask & FUNCTION))) || ((!(entry->data & FUNCTION)) && (data_mask & FUNCTION))){ //is a function so add if isnt or vise versa
		entries.push_back({key, data_mask, position, address});
	} else {
		error_log.add(Error("Symbol with name " + key + " already present in scope", position));
		exit(1);
	}
}

void SymbolTable::set_attribute(const std::string& key, const unsigned int data){
	Entry* const entry = lookup(key);
	if(entry != NULL){
		entry->data |= data;
	}
}

bool SymbolTable::get_attribute(const std::string& key, const unsigned int data){
	Entry const* const entry = lookup(key);
	if(entry != NULL){
		return entry->data & data == data;
	}
	return false;
}
