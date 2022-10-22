#include "SymbolMessage.h"
#include "Calculator.h"
#include <string>
int SymbolMessage::findSymbol(vector<Symbol> array, Symbol symbol) {
	for (int i = 0; i < array.size(); i++)
	{
		if (array[i].getSymbol() == symbol.getSymbol())
		{
			return i;
		}
	}
	return -1;
}
SymbolMessage::SymbolMessage(std::string message) : message(message) 
{
	for (int i = 0; i < message.size(); i++)
	{
		Symbol symbol(message[i]);
		this->symbols.push_back(symbol);
		if (this->findSymbol(this->uniqueSymbols, symbol) == -1)
		{
			this->uniqueSymbols.push_back(symbol);
		}
	}
	this->entropy = Calculator::countEntropy(*this);
	this->maxEntropy = Calculator::countMaxEntropy(*this);
	this->redundancy = Calculator::countRedundancy(*this);
}
