#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * is_ancestor - Helper function to check if a node is an
 * ancestor of another node
 *
 * @ancestor: grandparent node
 * @node:  node
 */


int is_ancestor(const binary_tree_t *ancestor, const binary_tree_t *node) {
    while (node != NULL) {
        if (node == ancestor) {
            return 1;
        }
        node = node->parent;
    }
    return 0;
}

/**
 * *binary_trees_ancestor - function that finds the lowest common ancestor of two nodes
 *
 * @first: First node
 * @second: Second node
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	if (first == NULL || second == NULL)
		return NULL;

	while (first != NULL)
	{
		if (is_ancestor(first, second))
		{
			return (binary_tree_t*)first;
		}
		first = first->parent;
	}
	return NULL;
}
