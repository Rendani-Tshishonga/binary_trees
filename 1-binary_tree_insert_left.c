#include "binary_trees.h"

/*
 * binary_tree_insert_left - a function that returns a node
 * to the left
 * @parent: a pointer to the parent
 * @value: the data to be stored in the node
 * Return: a pointer to the created node
 * */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
	{
		return NULL;
	}
	newnode = binary_tree_node(parent, value);
	if (parent->left != NULL)
	{
		newnode->left = parent->left;
		parent->left->parent = newnode;

	}
	parent->left = newnode;
	return newnode;
}
