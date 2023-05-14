#include "binary_trees.h"

/**
 * binary_tree_node - short description
 * @parent: a binary_tree_t *data type variable
 * @value: a int data type variable
 *
 * Return: type is binary_tree_t *
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(*node));
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	return (node);
}
