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
	TreeNode* getRightNode() { return this->right; }
	TreeNode* getLeftNode() { return this->left; }
private:
	int value = 0;
	Symbol symbol = Symbol();
	TreeNode* right = nullptr;
	TreeNode* left = nullptr;
};

