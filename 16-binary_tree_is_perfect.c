#include "binary_trees.h"

/**
 * binary_tree_is_perfect - A function that checks if a binary tree is perfect
 * @tree: A pointer to the root node of the tree to check
 * Return: 0 if tree is NULL, 0 if tree is not perfect
 * 1 if tree is perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if ((binary_tree_is_full(tree) == 1) &&
			(binary_tree_balance(tree) == 0))
	{
		return (1);
	}
	return (0);
}

/**
 * binary_tree_height - A function that measures the height of a binary tree
 * @tree: A  pointer to the root node of the tree to measure the height.
 * Return: Height of the binary tree or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftHeight = 0, rightHeight = 0;

	if (tree == NULL)
	{
		return (0);
	}
	leftHeight = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	rightHeight = tree->right ? 1 + binary_tree_height(tree->right) : 0;

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

	rightHeight = tree->right ? (int)binary_tree_height(tree->right) : -1;
	leftHeight = tree->left ? (int)binary_tree_height(tree->left) : -1;

	return (leftHeight - rightHeight);
}

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
