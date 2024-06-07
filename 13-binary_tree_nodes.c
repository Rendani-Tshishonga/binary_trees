#include "binary_trees.h"

/**
 * binary_tree_nodes - a function that counts the
 * nodes with atleast 1 child
 * @tree: the pointer to the root node
 * Return: the number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);

	nodes = ((tree->left || tree->right) ? 1 : 0);
	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);
	return (nodes);
}
