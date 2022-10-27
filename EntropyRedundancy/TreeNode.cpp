#include "TreeNode.h"
#include "Symbol.h"
TreeNode::TreeNode(int value) : value(value), symbol(Symbol()) {}
TreeNode::TreeNode(int value, Symbol symbol) : value(value), symbol(symbol) {}
void swapNodes(TreeNode*& newNode, TreeNode*& oldNode) {
	TreeNode* temp = oldNode;
	oldNode = newNode;
	newNode->add(temp);
}
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
	
}
