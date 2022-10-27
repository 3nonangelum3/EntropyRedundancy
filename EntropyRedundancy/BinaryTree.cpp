#include "BinaryTree.h"

BinaryTree::BinaryTree(TreeNode* startNode) : startNode(startNode) {}
void BinaryTree::push(TreeNode* treeNode) { startNode->add(treeNode); }
