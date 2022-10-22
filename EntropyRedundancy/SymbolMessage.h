#pragma once
#include <string>
#include "Symbol.h"
#include <vector>

using std::vector;

class SymbolMessage
{
public:
	SymbolMessage(std::string message);
	double getEntropy() { return entropy; }
	double getMaxEntropy() { return maxEntropy; }
	double getRedundancy() { return redundancy; }
	vector<Symbol> getSymbols() { return symbols; }
	vector<Symbol> getUniqueSymbols() { return uniqueSymbols; }
private:
	int findSymbol(vector<Symbol> array, Symbol symbol);
	std::string message = "";
	vector<Symbol> symbols = {};
	vector<Symbol> uniqueSymbols = {};
	double entropy = 0, maxEntropy = 0, redundancy = 0;
};