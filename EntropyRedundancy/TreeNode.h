#pragma once
class TreeNode
{
public:
	TreeNode();
	TreeNode(int value);
	int getValue() { return this->value; }
private:
	int value = 0;
};

