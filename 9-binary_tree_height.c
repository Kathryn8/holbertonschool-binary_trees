#include "binary_trees.h"

/**
  * binary_tree_height - short description
  * @tree: a binary_tree_t *data type variable
  * Return: height of the tree
  */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	return ((left > right) ? left + 1 : right + 1);
}
