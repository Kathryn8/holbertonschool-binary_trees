#include "binary_trees.h"

/**
 * binary_tree_postorder - short description
 * @tree: a const binary_tree_t *data type variable
 * @func: a pointer to function that takes int as parameter and returns void
 *
 * Return: type is void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
