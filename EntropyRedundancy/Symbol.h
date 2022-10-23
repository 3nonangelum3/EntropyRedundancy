#pragma once
class Symbol
{
public:
	Symbol() {}
	Symbol(char symbol);
	char getSymbol() { return symbol; }
private:
	char symbol = '\0';
};