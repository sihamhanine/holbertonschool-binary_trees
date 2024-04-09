#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * *binary_tree_leaves - Function that counts the leaves
 * in a binary tree
 * @tree: the pointer to the to count the number of leaves
 * Return: the number of leaves in the tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t count;
if (tree == NULL)
{
return (0);
}
if (tree->left == NULL && tree->right == NULL)
{
return (1);
}
count = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
return (count);
}
