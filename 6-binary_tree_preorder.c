#include "binary_trees.h"

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree != NULL && func != 0)
    {
        func(tree->n);
        binary_tree_preorder(root->left, func);
        binary_tree_preorder(root->right, func);
    }
}
