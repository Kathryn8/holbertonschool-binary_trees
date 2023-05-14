#include "binary_trees.h"

/**
 * binary_tree_height - short description
 * @tree: a const binary_tree_t *data type variable
 *
 * Return: type is size_t
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}
	if (binary_tree_height(tree->left) > binary_tree_height(tree->right))
	{
		return (1 + binary_tree_height(tree->left));
	}
	else
	{
		return (1 + binary_tree_height(tree->right));
	}
}
