#pragma once
#include "SymbolMessage.h"
static class Calculator
{
public:
	static double countEntropy(SymbolMessage sm);
	static double countMaxEntropy(SymbolMessage sm);
	static double countRedundancy(SymbolMessage sm);
	static int maximalStorage(SymbolMessage sm);
	static int minimalStorage(SymbolMessage sm);
};

