#include "binary_trees.h"

/**
 * binary_tree_is_leaf - short description
 * @node: a const binary_tree_t *data type variable
 *
 * Return: 1 if node is a leaf, otherwise 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
