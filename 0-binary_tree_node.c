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
	bianry_tree_t *right = NULL;

	if (parent == 0)
		return NULL;

	parent->data = value;
	binary_tree_node(parent->left, value);
	binary_tree_node(parent->right, value);
}
