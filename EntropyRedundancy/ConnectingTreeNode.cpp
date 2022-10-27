#include "ConnectingTreeNode.h"

ConnectingTreeNode::ConnectingTreeNode()
{
	this->countValue();
}

void ConnectingTreeNode::add(ConnectingTreeNode* newNode)
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
	if (right->right == nullptr && right->left == nullptr)
	{
		ConnectingTreeNode treeNode = ConnectingTreeNode();
		treeNode.add(this->right);
		treeNode.add(newNode);
		this->right = &treeNode;
	}
	else
	{
		right->add(newNode);
	}
	this->countValue();
}

void ConnectingTreeNode::countValue()
{
	int rightValue = this->getRight()->getValue();
	int leftValue = this->getLeft()->getValue();
	this->value = 0;
	if (rightValue)
	{
		this->value += rightValue;
	}
	if (leftValue)
	{
		this->value += leftValue;
	}
}
