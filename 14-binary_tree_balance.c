#include "binary_trees.h"

/**
 * binary_tree_height - A function that measures the height of a binary tree
 * @tree: A  pointer to the root node of the tree to measure the height.
 * Return: Height of the binary tree or 0 if tree is NULL
 */

int height(const binary_tree_t *tree)
{
	int leftHeight = 0, rightHeight = 0;

	if (tree == NULL)
	{
		return (0);
	}
	leftHeight = tree->left ? 1 + height(tree->left) : 0;
	rightHeight = tree->right ? 1 + height(tree->right) : 0;

	return (leftHeight > rightHeight ? leftHeight : rightHeight);
}

/**
 * binary_tree_balance - A function that measures the balance
 * factor of a binary tree
 * @tree: A pointer to the root node of the tree to measure the balance factor
 * Return: the balanced factor of the tree or 0 if tree is NULL.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int leftHeight, rightHeight;

	if (tree == NULL)
	{
		return (0);
	}

	rightHeight = tree->right ? height(tree->right) : -1;
	leftHeight = tree->left ? height(tree->left) : -1;

	return (leftHeight - rightHeight);
}
