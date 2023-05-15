#include "binary_trees.h"
/**
* binary_tree_h - short description
* @tree: a binary_tree_t *data type variable
* Return: height of the tree
*/
int binary_tree_h(const binary_tree_t *tree)
{
	int left;
	int right;

	if (tree == NULL)
		return (-1);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	left = binary_tree_h(tree->left);
	right = binary_tree_h(tree->right);
	return ((left > right) ? left + 1 : right + 1);
}
/**
 * binary_tree_balance - short description
 * @tree: a binary_tree_t *data type variable
 * Return: balance factor of the node/tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_h(tree->left) - binary_tree_h(tree->right));
}
