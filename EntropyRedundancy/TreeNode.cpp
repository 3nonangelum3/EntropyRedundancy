#include "TreeNode.h"
#include "Symbol.h"
TreeNode::TreeNode(int value) : value(value), symbol(Symbol()) {}
TreeNode::TreeNode(int value, Symbol symbol) : value(value), symbol(symbol) {}

int TreeNode::add(TreeNode* newNode)
{
	if (right == nullptr)
	{
		right = newNode;

	}
	else
	{
		
	}
}
