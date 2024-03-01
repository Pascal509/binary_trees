#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * *binary_tree_sibling -  function that finds the sibling of a node
 *
 * Args:
 * @node: a pointer to the node to find the sibling
 *
 * Return: Always 0 (Success)
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	if (node == node->parent->right)
		return (node->parent->left);
	return (NULL);
}
