#include "binary_trees.h"

/**
 * binary_tree_leaves - a function that counts the
 * leaves in a binary tree
 * @tree: pointer to the root node of the treee
 * Return: the number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf_count = 0;
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		left = binary_tree_leaves(tree->left);
		right = binary_tree_leaves(tree->right);
		leaf_count = left + right;
	}
	return ((!left && !right) ? leaf_count + 1 : leaf_count + 0);
}
