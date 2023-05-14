#include "binary_trees.h"

/**
 * binary_tree_insert_left - short description
 * @parent: a binary_tree_t *data type variable
 * @value: a int data type variable
 *
 * Return: type is binary_tree_t *
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(*node));
	if (node == NULL || parent == NULL)
	{
		return (NULL);
	}
	node->n = value;
	node->parent = parent;
	node->right = NULL;
	node->left = parent->left;
	parent->left = node;
	if (node->left != NULL)
	{
		node->left->parent = node;
	}
	return (node);
}
