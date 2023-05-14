#include "binary_trees.h"

/**
 * binary_tree_is_root - short description
 * @node: a const binary_tree_t *data type variable
 *
 * Return: ! if node is a root, otherwise 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->parent == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
