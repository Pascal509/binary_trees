#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes with at
 * least 1 child in a binary tree
 * Args:
 * @tree: a pointer to the root node of the tree to count the
 * number of nodes
 * Return: Always 0 (Success)
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodeCountLeft;
	size_t nodeCountRight;
	size_t getNodeCount;

	if (tree == NULL)
		return (0);

	nodeCountLeft = binary_tree_nodes(tree->left);
	nodeCountRight = binary_tree_nodes(tree->right);
	getNodeCount = nodeCountLeft + nodeCountRight;

	return (getNodeCount + (tree->left || tree->right ? 1 : 0));
}


