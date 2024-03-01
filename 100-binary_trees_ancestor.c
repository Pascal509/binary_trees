#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * *binary_trees_ancestor - function that finds the lowest common ancestor of two nodes
 *
 * @first: First node
 * @second: Second node
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	if (tree != NULL)
	{
		if (tree->n > first && tree->n > second)
		{
			return binary_trees_ancestor(tree->left, first, second);
		}
		if (tree->n < first && item->n < node _2)
		{
			return binary_trees_ancestor(tree->, first, second);
		}
		return tree;
	}
}
