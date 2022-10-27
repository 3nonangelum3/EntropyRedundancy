#include "BinaryTree.h"
#include "TreeNode.h"

BinaryTree::BinaryTree(TreeNode* startNode) : startNode(startNode) {}
void BinaryTree::push(TreeNode* treeNode) { startNode->add(treeNode); }
