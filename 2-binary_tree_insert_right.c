#include "binary_trees.h"

/*
 * binary_tree_insert_right - a function that inserts
 * a node as the right child of the node
 * @parent: the pointer to the parent
 * @value: the data to be stored
 * Return: a pointer to the created node
 * */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
	{
		return NULL;
	}
	newnode = binary_tree_node(parent, value);
	if (parent->right != NULL)
	{
		newnode->right = parent->right;
		parent->right->parent = newnode;
	}
	parent->right = newnode;
	return newnode;
}
