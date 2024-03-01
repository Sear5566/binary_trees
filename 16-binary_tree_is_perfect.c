#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 *
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 0 if Null.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depths;
	size_t node_count;
	size_t perfect_node_count;

	depths = binary_tree_depth(tree);

	node_count = binary_tree_nodes(tree);

	perfect_node_count = pow(2, depths) - 1;

	if (tree == NULL)
		return (0);
	return (node_count == perfect_node_count);
}
