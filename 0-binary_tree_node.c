#include "binary_trees.h"

/*
 * @binary_tree_node - The function used to create a new node.
 * @parent - the pointer to the parent
 * @values - the data of the node
 * Return - a new node
 * 
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (root == NULL)
	{
		return NULL
	}
	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;
	return newnode;
}
