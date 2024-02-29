#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node as the
 * right-child of another node
 *
 * Args:
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Return: Always 0 (Success)
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	/*Check if parent node is NULL*/
	if (parent == NULL)
		return (NULL);

	binary_tree_t *newRightNode = malloc(sizeof(binary_tree_t));

	if (newRightNode != NULL)
	{
		/*Initialize values of the new right node*/
		newRightNode->n = value;
		newRightNode->parent = parent;
		newRightNode->left = NULL;
		newRightNode->right = NULL;

		if (parent->right != NULL)
		{
			newRightNode->right = parent->right;
			parent->right->parent = newRightNode;
		}

		/* Set the new node as the left node of parent*/
		parent->right = newRightNode;

		return (newRightNode);
	}

	else
	{
		return (NULL);
	}
}
