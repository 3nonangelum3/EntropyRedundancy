#include "Calculator.h"
int countOccurrences(SymbolMessage sm, int symbolIndex) {
	int iter = 0;
	for (int i = 0; i < sm.getSymbols().size(); i++)
	{
		if (sm.getUniqueSymbols()[symbolIndex].getSymbol() == sm.getSymbols()[i].getSymbol())
		{
			iter++;
		}
	}
	return iter;
}
double Calculator::countEntropy(SymbolMessage sm)
{
	double entropy = 0;
	int length = sm.getUniqueSymbols().size();
	for (int i = 0; i < length; i++)
	{
		double P = (double)countOccurrences(sm, i) / sm.getSymbols().size();
		entropy += P * -log2(P);
	}
	return entropy;
}
double Calculator::countMaxEntropy(SymbolMessage sm)
{
	return log2(sm.getUniqueSymbols().size());
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
