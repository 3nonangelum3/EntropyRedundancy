#pragma once
#include "Symbol.h"
class TreeNode
{
public:
	TreeNode();
	TreeNode(int value);
	TreeNode(int value, Symbol symbol);
	void add(TreeNode* newNode);
	int getValue() { return this->value; }
	Symbol getSymbol() { return this->symbol; }
	TreeNode* getRightNode() { return this->right; }
	TreeNode* getLeftNode() { return this->left; }
	string getPath() { return this->path; }
private:
	int value = 0;
	Symbol symbol = Symbol();
	string path = "";
	TreeNode* right = nullptr;
	TreeNode* left = nullptr;
};

