#include "Symbol.h"
Symbol::Symbol(const char symbol)
{
	if (symbol &&
		((symbol >= 'a' && symbol <= 'z') ||
			(symbol >= 'A' && symbol <= 'Z') ||
			(symbol >= '0' && symbol <= '9')))
	{
		this->symbol = symbol;
	}
}