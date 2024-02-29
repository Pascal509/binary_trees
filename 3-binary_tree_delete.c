#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * *newNode - function that creates a new node
 * binary_tree_delete - function that deletes an entire binary tree
 *
 * Args:
 * @tree: a pointer to the root node of the tree to delete
 * @value: argument inputted
 * Return: Always 0 (Success)
 */

binary_tree_t *newNode(binary_tree_t *tree, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (tree != NULL)
	{
		newNode->n = value;
		newNode->left = NULL;
		newNode->right = NULL;

		return (newNode);
	}
	else
		return (NULL);
}


/*
 *  This function traverses tree in post order
 *  to delete each and every node of the tree
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	 /* Delete both subtrees recursively */
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	/* then delete the node */
	free(tree);
}
