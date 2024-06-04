#include <stdlib.h>
#include "binary_tree.h"

/*
 * @binary_tree_node - The function used to create a new node.
 * @parent - the pointer to the parent
 * @values - the data of the node
 * Return - a new node
 * 
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *left = NULL;
	binary_tree_t *right = NULL;

	parent = malloc(sizeof(binary_tree_t));

	if (parent == 0)
		return NULL;

	parent->data = value;
	parent->left = binary_tree_node();
	parent->right = binary_tree_node();

	return parent;
}
