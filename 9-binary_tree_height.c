#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * *binary_tree_height - Function that measures the height
 * of a binary tree
 * @tree: the pointer to the root node of the tree
 * to measure the height
 * Return: the height of the node
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t hl = 0, hr = 0;
if (tree == NULL)
{
return (0);
}
if (tree->left == NULL && tree->right == NULL)
{
return (0);
}
else
{
hl = 1 + binary_tree_height(tree->left);
hr = 1 + binary_tree_height(tree->right);
if (hl > hr)
return (hl);
else
return (hr);
}
}
