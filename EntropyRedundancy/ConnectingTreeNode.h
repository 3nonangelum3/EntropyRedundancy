#pragma once
#include "TreeNode.h"
class ConnectingTreeNode : public TreeNode
{
public:
	ConnectingTreeNode();
	void add(ConnectingTreeNode* newNode);
	ConnectingTreeNode* getRight() { return right; }
	ConnectingTreeNode* getLeft() { return left; }
	int getValue() { countValue(); return value; }
private:
	ConnectingTreeNode* right = nullptr;
	ConnectingTreeNode* left = nullptr;
	int value = 0;
	void countValue();
};

