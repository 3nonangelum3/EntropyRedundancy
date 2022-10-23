#pragma once
#include "TreeNode.h"
class BinaryTree
{
public:
	void push(TreeNode* treeNode) {
		startNode->add(treeNode);
	}
private:
	TreeNode* startNode;
};

