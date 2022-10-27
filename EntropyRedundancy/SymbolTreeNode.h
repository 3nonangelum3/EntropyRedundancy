#pragma once
#include "TreeNode.h"
class SymbolTreeNode :
    public TreeNode
{
public:
    SymbolTreeNode(int value);
    SymbolTreeNode(int value, Symbol symbol);
private:
    int value = 0;
    Symbol symbol = Symbol();
};

