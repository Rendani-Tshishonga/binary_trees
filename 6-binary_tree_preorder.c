#include "binary_trees.h"

/*
 * binary_tree_preorder - a function that goes through
 * a binary tree using preorder transversal
 * @tree: a pointer to the root node
 * @func: is a function call for each node
 * Return: void
 * */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	else
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
