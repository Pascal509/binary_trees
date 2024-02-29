#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a
 * binary tree
 *
 * Args:
 * @tree: a pointer to the root node of the tree to measure the size
 *
 * Return: Always 0 (Success)
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t nodeLeft = binary_tree_size(tree->left);
	size_t nodeRight = binary_tree_size(tree->right);
	size_t sum = nodeLeft + nodeRight + 1;

	return (sum);
}
