#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/*Basic Binary Tree*/

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

/*Binary Search Tree*/
typedef struct binary_tree_s bst_t;

/*AVL Tree*/
typedef struct binary_tree_s avl_t;

/*Max Binary Heap*/
typedef struct binary_tree_s heap_t;

/**
 * struct struct queue_node - Binary tree node
 *
 * @node: Integer stored in the node
 * @next: Pointer to the parent node
 */
typedef struct queue_node {
        const binary_tree_t *node;
        struct queue_node *next;
} queue_node_t;


/*New node*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/*Insert left*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

/*Insert right*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

/*Delete*/
void binary_tree_delete(binary_tree_t *tree);

/* Is leaf*/
int binary_tree_is_leaf(const binary_tree_t *node);

/*Is root*/
int binary_tree_is_root(const binary_tree_t *node);

/*Pre-order traversal*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));

/*In-order traversal*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));

/*Post-order traversal*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));

/*Height */
size_t binary_tree_height(const binary_tree_t *tree);

/* Depth */
size_t binary_tree_depth(const binary_tree_t *tree);

/* Size */
size_t binary_tree_size(const binary_tree_t *tree);

/* Leaves */
size_t binary_tree_leaves(const binary_tree_t *tree);

/* Nodes */
size_t binary_tree_nodes(const binary_tree_t *tree);

/* Balance factor*/
int binary_tree_balance(const binary_tree_t *tree);

/*Is full */
int binary_tree_is_full(const binary_tree_t *tree);

/* Is perfect*/
int binary_tree_is_perfect(const binary_tree_t *tree);

/*Sibling */
binary_tree_t *binary_tree_sibling(binary_tree_t *node);

/* Uncle*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node);

/* print tree*/
void binary_tree_print(const binary_tree_t *);

/*Stores recursively each level in an array of strings*/
/*static int print_t(const binary_tree_t *tree, int offset, int depth, char **s);*/

/* Measures the height of a binary tree*/
/* static size_t _height(const binary_tree_t *tree);*/

void launch_test(binary_tree_t *n1, binary_tree_t *n2);

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second);

void enqueue(queue_node_t **front, queue_node_t **rear, const binary_tree_t *node);

const binary_tree_t *dequeue(queue_node_t **front, queue_node_t **rear);

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));

const binary_tree_t *dequeue(queue_node_t **front, queue_node_t **rear);

int binary_tree_is_complete(const binary_tree_t *tree);

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);

int binary_tree_is_bst(const binary_tree_t *tree);

bst_t *bst_insert(bst_t **tree, int value);

bst_t *array_to_bst(int *array, size_t size);

bst_t *bst_search(const bst_t *tree, int value);

bst_t *bst_remove(bst_t *root, int value);

int binary_tree_is_avl(const binary_tree_t *tree);

avl_t *avl_insert(avl_t **tree, int value);

avl_t *array_to_avl(int *array, size_t size);

avl_t *avl_remove(avl_t *root, int value);

avl_t *sorted_array_to_avl(int *array, size_t size);

int binary_tree_is_heap(const binary_tree_t *tree);

heap_t *heap_insert(heap_t **root, int value);

heap_t *array_to_heap(int *array, size_t size);

int heap_extract(heap_t **root);

int *heap_to_sorted_array(heap_t *heap, size_t *size);

int check_complete(const binary_tree_t *tree, size_t index, size_t size);
#endif /* _BINARY_TREES_H_ */
