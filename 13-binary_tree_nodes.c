#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * binary_tree_nodes - Function that counts the nodes with at
 * least 1 child in a binary tree
 * @tree: the pointer to the root node of the tree to
 * count the number of nodes
 * Return: the number of nodes in the tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t count;
if (tree == NULL)
{
return (0);
}
if (tree->left == NULL && tree->right == NULL)
{
return (0);
}
count = 1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
return (count);
}
