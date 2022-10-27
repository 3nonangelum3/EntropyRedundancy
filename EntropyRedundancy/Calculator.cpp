#include "Calculator.h"
double Calculator::countEntropy(SymbolMessage sm)
{
	double entropy = 0;
	map<char, int>::iterator iter;
	map<char, int> symbols = *(sm.getUniqueSymbols());
	for (iter = symbols.begin(); iter != symbols.end(); iter++)
	{
		double P = (double)iter->second / sm.getSymbols().size();
		entropy += P * -log2(P);
	}
	return entropy;
}
double Calculator::countMaxEntropy(SymbolMessage sm)
{
	return log2((*(sm.getUniqueSymbols())).size());
}
double Calculator::countRedundancy(SymbolMessage sm)
{
	return sm.getMaxEntropy() - sm.getEntropy();
}
int Calculator::maximalStorage(SymbolMessage sm)
{
	return sm.getMaxEntropy() * sm.getSymbols().size();
}
int Calculator::minimalStorage(SymbolMessage sm)
{
	return sm.getEntropy() * sm.getSymbols().size();
}
