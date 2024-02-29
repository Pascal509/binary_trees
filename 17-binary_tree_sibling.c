#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * *binary_tree_sibling -  function that finds the sibling of a node
 *
 * Args:
 * @node: a pointer to the node to find the sibling
 *
 * Return: Always 0 (Success)
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || parent == NULL)
		return (0);

	/* Compare the two given nodes with children of current node*/
	if (node->left && node->right)
	{
		binary_tree_t left = node->left->n;
		binary_tree_t right = node->right->n;

		if (left == node->left && right == node->right)
			return (1);
	}

	/* Check for left subtree*/
	if (node->left)
		if (binary_tree_sibling(node->left)
				return (1);

				/* Check for right subtree*/
				if (node->right)
				if (binary_tree_sibling(node->right)
					return (1);
					return (0);
					}
