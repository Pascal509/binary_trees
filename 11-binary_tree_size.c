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
	size_t nodeLeft;
	size_t nodeRight;
	size_t sum;

	if (tree == NULL)
		return (0);

	nodeLeft = binary_tree_size(tree->left);
	nodeRight = binary_tree_size(tree->right);
	sum = nodeLeft + nodeRight + 1;

	return (sum);
}
