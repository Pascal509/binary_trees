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
	binary_tree_t *newRightNode;

        if (parent == NULL)
                return (NULL);
        newRightNode = binary_tree_node(parent, value);
        if (newRightNode == NULL)
                return (NULL);

        /* If parent has right node, set as left child of new node*/
        if (parent->left != NULL)
        {
                newRightNode->right = parent->right;
                newRightNode->right->parent = newRightNode;
                parent->right = newRightNode;
        }
        else
        {
                /*Set new Node as right child of the parent*/
                parent->right = newRightNode;
        }

        return (newRightNode);
}
