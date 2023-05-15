#include "binary_trees.h"

/**
 * binary_tree_uncle - short description
 * @node: node to find the uncle of
 *
 * Return: a pointer to the uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *ptr;

	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->parent->left == node->parent)
	{
		ptr = node->parent->parent->right;
		return (ptr);
	}
	else
	{
		ptr = node->parent->parent->left;
		return (ptr);
	}
}
