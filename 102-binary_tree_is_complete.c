#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_complete - function that checks if a binary tree is complete
 * Args:
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: Always 0 (Success)
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (check_complete(tree, 0, binary_tree_nodes(tree)));
}

/**
 * check_complete - Helper function to recursively check
 * if a binary tree is complete.
 * @tree: A pointer to the root node of the tree.
 * @index: The current index of the node in the tree.
 * @size: The size of the tree.
 *
 * Return: 1 if the tree is complete, 0 otherwise.
 */

int check_complete(const binary_tree_t *tree, size_t index, size_t size)
{
	size_t leftSide;
	size_t rightSide;
	size_t totalSides;

	if (tree == NULL)
		return (1);

	if (index >= size)
		return (0);

	leftSide = check_complete(tree->left, 2 * index + 1, size);
	rightSide = check_complete(tree->right, 2 * index + 2, size);
	totalSides = leftSide && rightSide;

	return (totalSides);
}


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

	return (getNodeCount + 1);
}

