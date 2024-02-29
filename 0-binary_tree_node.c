#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value:  value to put in the new node
 *
 * Return: Always 0 (Success)
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/*Allocate memory*/
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	/* Check if memory allocation was successful */
	if (newNode != NULL)
	{
		/* initialize the values of newNode */
		newNode->n = value;
		newNode->parent = parent;
		newNode->left = NULL;
		newNode->right = NULL;

		return (newNode);
	}
	else
		return (NULL);
}
