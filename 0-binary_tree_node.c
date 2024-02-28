#include "binary_trees.h"
#include
/**
 * binary_tree_node - creates a binary tree node
 * binary_tree_t - param
 * @parent: A pointer to the parent of the node
 * @value: the value to put in the new node.
 * Return: Null if an error occurs
 *
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}


