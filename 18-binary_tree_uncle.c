#include "binary_trees.h"

binary_tree_t *sibling(binary_tree_t *node);

/**
 * binary_tree_uncle - A function that finds the uncle of a node
 * @node: A pointer to the node to find the uncle
 * Return: pointer to uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
	{
		return (NULL);
	}
	return (binary_tree_sibling(node->parent));
}

/**
 * binary_tree_sibling - A function that finds the sibling of a node
 * @node: A pointer to the node to find the sibling
 * Return: If node is NULL or the parent is NULL, return NULL
 * If node has no sibling, return NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->left == node)
	{
		return (node->parent->right);
	}
	else
	{
		return (node->parent->left);
	}
}
