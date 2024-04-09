#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * *binary_tree_depth - Function that measures the depth
 * of a binary tree 
 * @tree: the pointer to the root node of the tree
 * to measure the height
 * Return: the dept of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t depth = 0;
if (tree == NULL)
{
return (0);
}
if (tree->parent == NULL)
{
return (0);
}
else
{
depth = 1 + binary_tree_depth(tree->parent);
return (depth);
} 
}
