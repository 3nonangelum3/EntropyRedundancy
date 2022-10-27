#pragma once
class BinaryTree
{
public:
	BinaryTree(TreeNode* startNode);
	void push(TreeNode* treeNode);
private:
	TreeNode* startNode;
};

