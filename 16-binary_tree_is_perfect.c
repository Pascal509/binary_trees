#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_perfect - a function that checks if a binary tree is perfect
 *
 * Args:
 * @tree:  a pointer to the root node of the tree to check
 * Return: Always 0 (Success)
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depth;

        if (tree == NULL)
                return (-1);

        depth = binary_tree_depth(tree->parent);

        return (depth + 1);

	int pleft;
	int pright;
	int addTree;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	pleft = binary_tree_is_perfect(tree->left);
	pright = binary_tree_is_perfect(tree->right);
	addTree = pleft && pright;

	return (addTree);
}
