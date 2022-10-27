#pragma once
#include <string>
#include "Symbol.h"
#include <vector>
#include <map>

using std::vector;
using std::map;

class SymbolMessage
{
public:
	SymbolMessage(std::string message);
	double getEntropy() { return entropy; }
	double getMaxEntropy() { return maxEntropy; }
	double getRedundancy() { return redundancy; }
	string getMaxEncoding();
	string getMinEncoding();
	vector<Symbol> getSymbols() { return symbols; }
	map<char, int>* getUniqueSymbols() { return &(this->uniqueSymbols); }
private:
	std::string message = "";
	vector<Symbol> symbols = {};
	map<char, int> uniqueSymbols = {};
	double entropy = 0, maxEntropy = 0, redundancy = 0;
};