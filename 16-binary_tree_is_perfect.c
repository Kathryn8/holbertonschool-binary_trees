#include "binary_trees.h"
/**
 * find_depth - find tree depth
 * @tree: tree to be checked
 * Return: depth of the tree
 */
int find_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (1 + find_depth(tree->left));
}

/**
 * binary_tree_is_perfect - short description
 * @tree: a binary_tree_t *data type variable
 * Return: 0 if not or tree is NULL, 1 if is
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_d;
	int right_d;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL && tree->right != NULL)
	{
		left_d = find_depth(tree->left);
		right_d = find_depth(tree->right);
		if (left_d == right_d)
			return (binary_tree_is_perfect(tree->left)
			&& binary_tree_is_perfect(tree->right));
	}
	return (0);
}
