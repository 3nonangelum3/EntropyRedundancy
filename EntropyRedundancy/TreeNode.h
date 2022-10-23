#pragma once
#include "Symbol.h"
class TreeNode
{
public:
	TreeNode(int value);
	TreeNode(int value, Symbol symbol);
	static TreeNode Nothing;
	TreeNode* getRight() { return right; }
	TreeNode* getLeft() { return left; }
	int add(TreeNode* newNode);
private:
	int value;
	Symbol symbol;
	TreeNode *right = nullptr;
	TreeNode *left = nullptr;
};

