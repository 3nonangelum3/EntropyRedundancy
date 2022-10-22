#pragma once
#include "Node.h"
class TreeNode : public Node
{
public:
	Node getRight() { return right; }
	TreeNode(int value);
private:
	Node right;
};

