#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as a left-child
 * @parent: A pointer to the node
 * @value: THe value to store in the new node
 * Return:  if parent is NULL or an error occurs - NULL
 *
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}

