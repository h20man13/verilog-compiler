#include "ast/statement/EmptyStatement.h"


EmptyStatement::EmptyStatement(const Position& position): Statement(position) {}

EmptyStatement::~EmptyStatement(){}


void EmptyStatement::code_gen() const{}


void EmptyStatement::execute() const{}

