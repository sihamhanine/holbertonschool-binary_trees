#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *binary_tree_inorder - Function that traverses a binary
 * tree using inorder
 * @tree: the pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree != NULL && func != 0)
{
binary_tree_inorder(tree->left, func);
func(tree->n);
binary_tree_inorder(tree->right, func);
}
}
