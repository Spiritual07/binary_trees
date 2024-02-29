#include "binary_trees.h"

/**
 * binary_tree_is_full - A function that checks if a binary tree is full
 * @tree: A pointer to the root node of the tree to check
 * Return: 0 if tree is NULL, 0 if tree is not full, 1 if tree is full.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	if (tree->left && tree->right)
	{
		return (binary_tree_is_full(tree->left) &&
						binary_tree_is_full(tree->right));
	}
	return (0);
}
