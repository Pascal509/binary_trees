#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * Args:
 * @tree: pointer to the root node of the tree to count the number \
 * of leaves
 *
 * Return: Always 0 (Success)
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t getLeafCount;
	size_t leafCountLeft;
	size_t leafCountRight;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	leafCountLeft = binary_tree_leaves(tree->left);
	leafCountRight = binary_tree_leaves(tree->right);
	getLeafCount = leafCountLeft + leafCountRight;

	return (getLeafCount);
}
