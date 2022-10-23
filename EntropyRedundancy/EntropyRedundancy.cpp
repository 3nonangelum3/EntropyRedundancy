#include <iostream>
#include <vector>
#include "Symbol.h"
#include "SymbolMessage.h"
#include "Calculator.h"
#include "BinaryTree.h"

using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::string;



int main()
{
	cout << "Input a message: ";
	string message;
	cin >> message;
	cout << endl;
	SymbolMessage sm(message);
	cout << "Entropy: " << sm.getEntropy() << "\n";
	cout << "Max Entropy: " << sm.getMaxEntropy() << "\n";
	cout << "Redundancy: " << sm.getRedundancy() << "\n";
	cout << "Minimal storage: " << Calculator::minimalStorage(sm) << " bit\n";
	cout << "Maximal storage: " << Calculator::maximalStorage(sm) << " bit\n";
}
