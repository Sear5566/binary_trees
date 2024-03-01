#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - a function that checks
 * if a binary tree is full
 *
 * @tree: a pointer to the root node of the tree to check
 * Return: A fll tree or 0 if NULL
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left;

	int right;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);

	return ((left == 0 || right == 0) ? 0 : 1);
}
