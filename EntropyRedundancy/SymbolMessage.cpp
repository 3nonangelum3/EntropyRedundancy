#include "SymbolMessage.h"
#include "Calculator.h"
#include <string>
#include <map>
#include "TreeNode.h"
#include "BinaryTree.h"

using std::map;
using std::pair;

vector<char> findUniqueSymbols(string text)
{
	vector<char> uniqueSymbol = {};
	for (int i = 0; i < text.size(); i++)
	{
		bool exist = false;
		for (int iter = 0; iter < uniqueSymbol.size(); iter++)
		{
			if (uniqueSymbol[iter] == text[i])
			{
				exist = true;
				break;
			}
		}
		uniqueSymbol.push_back(text[i]);
	}
	return uniqueSymbol;
}

SymbolMessage::SymbolMessage(std::string message) : message(message) 
{
	vector<char> uniqueSymbol = findUniqueSymbols(message);
	for (int i = 0; i < uniqueSymbol.size(); i++)
	{
		this->uniqueSymbols.insert(pair<char, int>(uniqueSymbol[i], 0));
	}
	for (int i = 0; i < message.size(); i++)
	{
		Symbol symbol(message[i]);
		this->symbols.push_back(symbol);
		map<char, int>::iterator iter;
		for (iter = this->uniqueSymbols.begin(); iter != this->uniqueSymbols.end(); iter++) {
			if (message[i] == iter->first)
			{
				iter->second++;
			}
		}
	}

	this->entropy = Calculator::countEntropy(*this);
	this->maxEntropy = Calculator::countMaxEntropy(*this);
	this->redundancy = Calculator::countRedundancy(*this);
}

string toBinary(int number, int stringLength) {
	string bits = "";
	do
	{
		bits += static_cast<char>(number % 2 + 48);
		number /= 2;
	} while ((double)number / 2 != 0);
	string reverse = "";
	for (int i = bits.length() - 1; i >= 0; i--)
	{
		reverse += bits[i];
	}
	bits = reverse;
	for (int i = 0; i < stringLength - bits.size(); i++)
	{
		bits = "0" + bits;
	}
	return bits;
}
string SymbolMessage::getMaxEncoding()
{
	map<char, string> symbolEncoding = {};

	int* currentBit = new int(0);
	string result = "";

	map<char, int> us = this->uniqueSymbols;
	for (auto& iter : this->uniqueSymbols)
	{
		int max = us.begin()->second;
		pair<char, int> maxPair = pair<char, int>(us.begin()->first, max);
		for (auto& iter : us)
		{
			if (iter.second > max)
			{
				max = iter.second;
				maxPair = iter;
			}
		}
		us.erase(maxPair.first);
		symbolEncoding.insert(pair<char, string>(maxPair.first, toBinary((*currentBit)++, this->maxEntropy)));
	}
	for (auto& i : this->symbols)
	{
		for (auto& iter : symbolEncoding)
		{
			if (iter.first == i.getSymbol())
			{
				result += iter.second;
			}
		}
	}
	delete currentBit;
	return result;
}
string SymbolMessage::getMinEncoding()
{
	TreeNode treeNode(this->getSymbols().size());
	BinaryTree binaryTree(&treeNode);
	return string();
}