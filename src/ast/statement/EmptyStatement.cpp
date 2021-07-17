#include "ast/statement/EmptyStatement.h"


EmptyStatement::~EmptyStatement() {}

EmptyStatement::EmptyStatement(): Statement(*(const Position*)NULL) {}


void EmptyStatement::code_gen() const{}


void EmptyStatement::execute() const{}

