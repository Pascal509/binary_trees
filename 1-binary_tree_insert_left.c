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

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
        if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
                return (NULL);

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

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
        if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
                return (NULL);
        return (binary_tree_sibling(node->parent));

}
