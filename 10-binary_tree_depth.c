#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a
 * node in a binary tree
 *
 * Args:
 * @tree: is a pointer to the node to measure the depth
 *
 * Return: Always 0 (Success)
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (-1);

	depth = binary_tree_depth(tree->parent);

	return (depth + 1);
}
