#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - a function that checks if a node is a leaf
 * Args:
 * @node: a pointer to the node to check
 *
 * Return: Always 0 (Success)
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL)
	{
		return (node->left == NULL && node->right == NULL);
	}
	else
		return (0);
}
