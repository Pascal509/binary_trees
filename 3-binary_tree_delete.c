#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - function that deletes an entire binary tree
 * @tree: a pointer to the root node of the tree to delete
 * Return: Always 0 (Success)
 */

/*
 * This function traverses tree in post order
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
