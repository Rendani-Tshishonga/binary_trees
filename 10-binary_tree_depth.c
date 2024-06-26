#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a tree.
 * @tree: a pointer to the node to measure
 * Return: number of depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		depth = ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
		return (depth);
	}
}
