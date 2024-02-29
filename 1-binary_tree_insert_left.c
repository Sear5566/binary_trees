#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 *
 * @parent: Pointer to the parent node of the node to create
 * @value: Value to out in new node
 *
 * Return: Pointer to new node or else NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_left_node = binary_tree_node(parent, value);

	if (new_left_node == NULL)
	{
		return (NULL);
	}

	if (parent->left != NULL)
	{
		new_left_node->left = parent->left;
		parent->left->parent = new_left_node;
	}

	parent->left = new_left_node;
	return (new_left_node);
}
