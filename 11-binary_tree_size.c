#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * *binary_tree_size - Function that measures the size
 * of a binary tree 
 * @tree: the pointer to the root node of the tree
 * to measure the height
 * Return: the size of the node
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t size = 0;
if (tree != NULL)
{
size = size + 1;
size = size + binary_tree_size(tree->left);
size = size + binary_tree_size(tree->right);
}
return (size); 
}
