#pragma once
#include <string>

using std::string;

class Symbol
{
private:
	char symbol = '\0';
public:
	Symbol() {}
	Symbol(char symbol);
	char getSymbol() { return symbol; }
};