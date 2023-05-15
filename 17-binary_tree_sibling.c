#include "binary_trees.h"

/**
 * binary_tree_sibling - short description
 * @node: node to find the sibling of
 *
 * Return: a pointer to the sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *ptr;

	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->left == node)
	{
		ptr = node->parent->right;
		return (ptr);
	}
	else
	{
		ptr = node->parent->left;
		return (ptr);
	}

}
