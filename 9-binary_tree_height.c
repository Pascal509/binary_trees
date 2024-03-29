#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height
 * of a binary tree
 *
 * Args:
 * @tree: is a pointer to the root node of the tree to measure
 * the height.
 *
 * Return: Always 0 (Success)
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftHeight;
	size_t rightHeight;

	if (tree == NULL)
		return (-1);

	leftHeight = binary_tree_height(tree->left);
	rightHeight = binary_tree_height(tree->right);

	if (leftHeight >= rightHeight)
		return (rightHeight + 1);
	else
		return (leftHeight + 1);
}
