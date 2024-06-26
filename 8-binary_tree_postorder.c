#include "binary_trees.h"

/**
 * binary_tree_postorder - a function that goes through
 * a binary tree using postorder traversal
 * @tree: the pointer to the root node to traverse
 * @func: a pointer to a to call for each node
 * Return: Nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
