#include "TreeNode.h"

TreeNode::TreeNode() {}
TreeNode::TreeNode(int value) : value(value){}
TreeNode::TreeNode(int value, Symbol symbol) : value(value), symbol(symbol) {}

void TreeNode::add(TreeNode* newNode)
{
	if (right == nullptr)
	{
		right = newNode;
		return;
	}
	if (left == nullptr)
	{
		left = right;
		right = newNode;
		return;
	}
	TreeNode node = TreeNode();
	node.right = newNode;
	node.left = right;
	right = &node;
}
