#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as the
 * left-child of another node
 *
 * Args:
 * @parent: pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 *
 * Return: Always 0 (Success)
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	/*Allocate memory */
	binary_tree_t *newLeftNode = malloc(sizeof(binary_tree_t));

	if (newLeftNode != NULL)
	{
		newLeftNode->n = value;
		newLeftNode->parent = parent;
		newLeftNode->left = NULL;
		newLeftNode->right = NULL;

		/* If parent has left node, set as left child of new node*/
		if (parent->left != NULL)
		{
			newLeftNode->left = parent->left;
			parent->left->parent = newLeftNode;
			parent->left = newLeftNode;
		}
		else
		{
			/*Set new Node as left child of the parent*/
			parent->left = newLeftNode;
		}

		return (newLeftNode);
	}
	else
	{
		return (NULL);
	}
}
