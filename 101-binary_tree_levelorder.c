#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * enqueue - Function to enqueue a node in the queue
 *
 * @front: node at front
 * @rear: node at the rear
 * @node: new node
 */
void enqueue(queue_node_t **front, queue_node_t **rear,
		const binary_tree_t *node)
{
	queue_node_t *new_node = malloc(sizeof(queue_node_t));

	if (new_node == NULL)
		return;

	new_node->node = node;
	new_node->next = NULL;

	if (*rear == NULL)
	{
		*front = *rear = new_node;
	}
	else
	{
		(*rear)->next = new_node;
		*rear = new_node;
	}
}

/**
 * dequeue - Function to dequeue a node in the queue
 * @front: front node
 * @rear: rear node
 *
 * Return: 0;
 */
const binary_tree_t *dequeue(queue_node_t **front, queue_node_t **rear)
{
	if (*front == NULL)
		return (NULL);

	const binary_tree_t *node = (*front)->node;
	queue_node_t *temp = *front;

	*front = (*front)->next;
	if (*front == NULL)
	{
		*rear = NULL;
	}

	free(temp);
	return (node);
}

/**
 * binary_tree_levelorder - function that goes through a binary
 * tree using level-order traversal
 *
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node
 *
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	queue_node_t *front = NULL;
	queue_node_t *rear = NULL;

	enqueue(&front, &rear, tree);

	while (front != NULL)
	{
		const binary_tree_t *current = dequeue(&front, &rear);

		func(current->n);

		if (current->left != NULL)
		{
			enqueue(&front, &rear, current->left);
		}
		if (current->right != NULL)
		{
			enqueue(&front, &rear, current->right);
		}
	}

}
