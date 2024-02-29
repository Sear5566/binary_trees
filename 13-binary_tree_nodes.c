#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - a function that counts the
 * nodes with at least 1 child in a binary tree
 *
 * @tree:  a pointer to the root node
 * of the tree to count the number of nodes
 *
 * Return: nodes with children or 0 is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int nodes;

	nodes = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		nodes += 1;

	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);

	return (nodes);
}
