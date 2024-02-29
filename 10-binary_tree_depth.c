#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - a function that measures
 * the depth of a node in a binary tree.
 *
 * @tree: This is a pointer to the node for measuring the depth
 *
 * Return: depth of node in the tree or 0 if tree is NULL.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth;

	depth = 0;

	if (tree == NULL)
		return (0);

	if (tree->parent == NULL)
		return (depth);

	while (tree->parent != NULL)
	{
		tree = tree->parent;
		depth += 1;
	}
	return (depth);
}
