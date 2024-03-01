#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling -  function that finds the sibling of a node
 *
 * Args:
 * @node: a pointer to the node to find the sibling
 *
 * Return: Always 0 (Success)
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	if (node == node->parent->right)
		return (node->parent->left);
	return (NULL);
}


/**
 * binary_tree_uncle - a function that finds the uncle of a node
 * Args:
 * @node: a pointer to the node to find the uncle
 *
 * Return: Always 0 (Success)
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}
