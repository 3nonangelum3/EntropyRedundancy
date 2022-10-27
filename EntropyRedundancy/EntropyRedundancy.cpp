#include <iostream>
#include <vector>
#include "Symbol.h"
#include "SymbolMessage.h"
#include "Calculator.h"
#include "BinaryTree.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

using std::vector;
using std::pair;

int main()
{
	cout << "Input a message: ";
	string message;
	cin >> message;
	cout << endl;
	SymbolMessage sm(message);
#pragma region first Part
	cout << "Entropy: " << sm.getEntropy() << "\n";
	cout << "Max Entropy: " << sm.getMaxEntropy() << "\n";
	cout << "Redundancy: " << sm.getRedundancy() << "\n\n";
	cout << "Minimal storage: " << Calculator::minimalStorage(sm) << " bit\n";
	cout << "Maximal storage: " << Calculator::maximalStorage(sm) << " bit\n" << endl;
#pragma endregion
#pragma region second part
	cout << sm.getMaxEncoding() << " (" << Calculator::maximalStorage(sm) << " bit)\n";
	cout << sm.getMinEncoding() << " (" << Calculator::minimalStorage(sm) << " bit)\n";
#pragma endregion
}