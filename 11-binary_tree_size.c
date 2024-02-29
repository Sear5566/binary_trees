#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_size - a function that measures
 * the size of a binary tree.
 *
 * @tree: a pointer to the root node of the tree to measure the size
 *
 * Return: the size of the tree or 0 if the tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	int size;

	size = 1;

	if (tree == NULL)
		return (0);

	size += binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);
	return (size);
}
