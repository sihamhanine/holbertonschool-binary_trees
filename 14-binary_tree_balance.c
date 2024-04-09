#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
size_t get_tree_height(const binary_tree_t *tree);
/**
 * binary_tree_balance - Function that measures the balance
 * factor of a binary tree
 * @tree: the pointer to the root node of the tree to
 * measure the balance factor
 * Return: the number of balance factor in the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int lh, rh;
if (tree == NULL)
{
return (0);
}
else
{
lh = get_tree_height(tree->left);
rh = get_tree_height(tree->right);
return (lh - rh);
}
}
/**
 * *get_tree_height - Function that measures the height
 * of a binary tree
 * @tree: the pointer to the root node of the tree
 * to measure the height
 * Return: the height of the node
 */
size_t get_tree_height(const binary_tree_t *tree)
{
size_t hl = 0, hr = 0;
if (tree == NULL)
{
return (-1);
}
if (tree->left == NULL && tree->right == NULL)
{
return (0);
}
else
{
hl = 1 + get_tree_height(tree->left);
hr = 1 + get_tree_height(tree->right);
if (hl > hr)
return (hl);
else
return (hr);
}
}
