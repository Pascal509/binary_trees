#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - function that checks if a given node is a root
 *
 * Args:
 * @node: is a pointer to the node to check
 *
 * Return: Always 0 (Success)
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	/** Check if node is NULL**/
	if (node == NULL)
		return (0);

	/* Check if node is root */
	return (node->parent == NULL);
}
