#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *binary_tree_insert_left - Function that creates a binary tree node
 * @parent: the pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 * Return: a pointer to the create node or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new;
if (parent == NULL)
return (NULL);
new = binary_tree_node(parent, value);
if (new == NULL)
return (NULL);
if (parent->left != NULL)
{
new->left = parent->left;
parent->left->parent = new;
}
parent->left = new;
return (new);
}
