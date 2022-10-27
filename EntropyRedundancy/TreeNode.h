#pragma once
#include "Symbol.h"
class TreeNode
{
public:
	TreeNode(int value);
	TreeNode(int value, Symbol symbol);
	void add(TreeNode* newNode);
	static TreeNode Nothing;
	TreeNode* getRight() { return right; }
	TreeNode* getLeft() { return left; }
private:
	int value = 0;
	Symbol symbol;
	TreeNode *right = nullptr;
	TreeNode *left = nullptr;
};

