#include "SymbolTable.h"
#include <sstream>
#include <stdio.h>
#include <string>


const std::string attribute_to_string(unsigned int mask);

SymbolTable::SymbolTable(const std::string &scope_name, ErrorLog& error_log, SymbolTable const* const parent): scope_name(scope_name), error_log(error_log), parent(parent){}

SymbolTable::~SymbolTable(){
	while(!entries.empty()){
		Entry* const entry = *entries.begin();
		delete entry;
		entries.pop_front();
	}
}

//the default constructor for empty
SymbolTable::Entry::Entry(const std::string identifier, unsigned int data, const Position position, AstNode* const address): identifier(identifier), data(data), position(position), address(address){}
SymbolTable::Entry::Entry(const Entry& entry): identifier(entry.identifier), data(entry.data), position(entry.position), address(entry.address){}

SymbolTable::Entry* const SymbolTable::lookup(const std::string& key, const unsigned int data_type, const bool in_scope) const{
	for(std::list<Entry* const>::const_reverse_iterator it = entries.rbegin(); it != entries.rend(); it++){
		if((*it)->identifier == key && (((*it)->data & data_type) == data_type)){
			return (*it);
		}
	}

	if(in_scope || parent == NULL){
		return NULL;
	} else {
		return parent->lookup(key);
	}
}

void SymbolTable::insert(const std::string& key, const unsigned int data_mask, const Position& position, AstNode* const address){
	Entry* const entry = lookup(key, data_mask, true);
	if(((data_mask & SymbolTable::WIRE) || (data_mask & SymbolTable::REG)) && (entry->data & SymbolTable::UNIDENTIFIED)){ //edit if it exists and it is undefined
		set_attribute(key, data_mask); //update the unidentified variable to whatever this is
	} if(entry == NULL){ //nothing exists so add it
		entries.push_back(new Entry(key, data_mask, position, address));
	} else if(((entry->data & FUNCTION) && (!(data_mask & FUNCTION))) || ((!(entry->data & FUNCTION)) && (data_mask & FUNCTION))){ //is a function so add if isnt or vise versa
		entries.push_back(new Entry(key, data_mask, position, address));
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

const std::string SymbolTable::to_string() const {

	char buff[300];


	std::stringstream ss;

	if(this->parent != NULL){
		ss << parent->to_string() << std::endl << std::endl;
	}

	sprintf(buff, "|%10.10s|%50.50s|%20.20s|%10.10s|\n", "Symbol", "Attributes", "Position", "Address");

	ss << "Scope Name: " << scope_name << std::endl << std::string(95, '-') << std::endl << buff << std::string(95, '_') << std::endl;

	for(std::list<Entry* const>::const_reverse_iterator it = entries.rbegin(); it != entries.rend(); it++){
		const std::string value = attribute_to_string((*it)->data);
		sprintf(buff, "|%10.10s|%50.50s|%20.20s|%10.10p|\n", (*it)->identifier.c_str(), value.c_str(), (*it)->position.to_string().c_str(), (void*)((*it)->address));
		ss << buff;
	}

	ss << std::string(95, '_') << std::endl;

	return ss.str();
}

 const std::string attribute_to_string(unsigned int mask){
	std::stringstream ss;

	if(mask & SymbolTable::MACRO){
		ss << "=> MACRO ";
	} else {
		if (mask & SymbolTable::UNIDENTIFIED) {
			ss << "=> UNIDENTIFIED ";
		}

		if (mask & SymbolTable::INPUT) {
			ss << "=> INPUT ";
		} else if (mask & SymbolTable::OUTPUT) {
			ss << "=> REG ";
		}

		if (mask & SymbolTable::INTEGER) {
			ss << "=> INTEGER ";
		} else if (mask & SymbolTable::REAL) {
			ss << "=> REAL ";
		} else if (mask & SymbolTable::REG) {
			ss << "=> REG ";
		} else if (mask & SymbolTable::WIRE) {
			ss << "=> WIRE ";
		}

		if (mask & SymbolTable::VECTOR) {
			ss << "=> VECTOR ";
		}

		if (mask & SymbolTable::PARAMATER) {
			ss << "=> PARAMATER ";
		} else if (mask & SymbolTable::PORT) {
			ss << "=> PORT ";
		} else if (mask & SymbolTable::LOCAL) {
			ss << "=> LOCAL ";
		} else if (mask & SymbolTable::GLOBAL) {
			ss << "=> GLOBAL ";
		}

		if (mask & SymbolTable::ARRAY) {
			ss << "=> ARRAY ";
		}
	}

	return ss.str();
}

bool SymbolTable::get_attribute(const std::string& key, const unsigned int data){
	Entry const* const entry = lookup(key);
	if(entry != NULL){
		return (entry->data & data) == data;
	}
	return false;
}
