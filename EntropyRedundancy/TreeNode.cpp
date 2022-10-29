#include "TreeNode.h"

TreeNode::TreeNode() {}
TreeNode::TreeNode(int value) : value(value){}
TreeNode::TreeNode(int value, Symbol symbol) : value(value), symbol(symbol) {}

void TreeNode::add(TreeNode* newNode)
{
	if (right == nullptr)
	{
		right = newNode;
		newNode->path += "0";
		return;
	}
	if (left == nullptr)
	{
		left = right;
		left->path.erase(left->path.size() - 1);
		left->path += "1";
		right = newNode;
		newNode->path += "0";
		return;
	}
	if (right->right == nullptr)
	{
		TreeNode *node = new TreeNode();
		node->add(right);
		right = node;
		newNode->path += "0";
		node->add(newNode);
	}
	else {
		newNode->path += "0";
		right->add(newNode);
	}
}
