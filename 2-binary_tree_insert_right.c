#include "binary_trees.h"

/**
 * binary_tree_insert_right - short description
 * @parent: a binary_tree_t *data type variable
 * @value: a int data type variable
 *
 * Return: type is binary_tree_t *
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
	{
		return (NULL);
	}
	node = malloc(sizeof(*node));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = parent->right;
	parent->right = node;
	if (node->right != NULL)
	{
		node->right->parent = node;
	}
	return (node);
}
